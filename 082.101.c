void write_arr(int line, int col, int (*arr)[col])
{
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_arr(int line, int col, int (*arr)[col])
{
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < col; j++) {
            printf ("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int size, shift;
    scanf("%d", &size);  
    int arr[size][size];
    write_arr(size, size, arr);
    scanf("%d", &shift);
	shift %= size;
	int support[size];
    for (int line = 0; line < size; line++) {
		for (int i = 0; i < size; i++) support[(i + shift) % size] = arr[line][i];
		for (int i = 0; i < size; i++) arr[line][i] = support[i];
    }
    print_arr(size, size, arr);
	return 0;
}