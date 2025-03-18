#include<stdio.h>

void main()
{
	char str[100];
    int size = sizeof(str) / sizeof(str[0]);
    int count = 0;

printf("nhap chuoi: ");
gets(str);

while (str[count] != '\0') {
    count++;
}
printf("so ky tu %d", count);
}