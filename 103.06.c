/*Шифр Цезаря.
Написать функцию void char_cesar(char * ch, int shift), которая изменяет переданный ей символ ch по алгоритму Цезаря с ключом shift.
Шифр Цезаря заключается в замене текущего символа на тот, который находится в алфавите на k
позиций правее. Например, буква a при сдвиге 2 будет заменена на букву c,
 буква x при сдвиге 4 будет заменена на букву b, т.к. мы считаем алфавит зацикленным.
*/

void char_cesar(char* ch, int shift)
{
    *ch += shift;
    *ch=*ch > 122 ? *ch - 26 : *ch; 
}