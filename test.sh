#!/usr/bin/env bash

set -Eeuo pipefail
trap cleanup SIGINT SIGTERM ERR EXIT

script_dir=$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd -P)

usage() {
    cat <<EOF
Usage: $(basename "${BASH_SOURCE[0]}") [-h] [-v] FILE

This script makes binary file from FILE.c and compare output with FILE.test
First line (not even line) from FILE.test is the input data for the binary file,
second line (even line) is the correct output.

Available options:

-h, --help      Print this help and exit
-v, --verbose   Print script debug info
EOF
    exit
}

cleanup() {
    trap - SIGINT SIGTERM ERR EXIT
    # script cleanup here
    [[ -f "${FILE-}" ]] && rm -r $FILE
}

msg() {
    echo >&2 -e "${1-}"
}

die() {
    local msg=$1
    local code=${2-1} # default exit status 1
    msg "$msg"
    exit "$code"
}

parse_params() {
    FILE=""
    while :; do
        case "${1-}" in
            -h | --help) usage ;;
            -v | --verbose) set -x ;;
            [0-9]*) FILE=$1 ;;
            -?*) die "Unknown option: $1" ;;
            *) break ;;
        esac
        shift
    done

    args=("$@")

    # check required params and arguments
    [[ -z "${FILE-}" ]] && die "Missing required parameter: file name"

    return 0
}

parse_params "$@"

# script logic here

make $FILE
chmod +x $FILE
cat ${FILE}.test | while read -r DATA; do
    OUTPUT=`echo $DATA | $script_dir/$FILE`
    read -r CORRECT
    if [[ $OUTPUT=$CORRECT ]]; then
        RESULT="ok"
    else
        RESULT="fail"
    fi
    echo "$DATA -> $CORRECT: $RESULT!"
done
