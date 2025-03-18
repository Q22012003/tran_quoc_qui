#include<stdio.h>

void main()
{
	char str[100];
    int size = sizeof(str) / sizeof(str[0]);
    int count = 0, i = 0;

printf("nhap chuoi: ");
gets(str);

while (str[i] != '\0') {
    if (str[i] >='a'&&str[i]<='z')
    {
        str[i] = str[i] - 32;
    }
    i++;
}
for (i = 0; i < size; i++)
{
    printf("%c", str[i]);
}
}