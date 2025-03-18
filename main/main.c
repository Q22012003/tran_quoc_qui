#include<stdio.h>

void main()
{
	char str[100];
    int size = sizeof(str) / sizeof(str[0]);
    int count = 0, i = 0;

printf("nhap chuoi: ");
gets(str);

while (str[i] != '\0') {
    if (str[i] == ' ')
    {
        count++;
    }
    i++;
}
printf("so ky tu ' ' %d", count);
}