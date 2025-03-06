#include <stdio.h>

void main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("moi ban nhap so a: ");
       	scanf_s("%d", &a);
	printf("moi ban nhap so b: ");
	    scanf_s("%d", &b);
		printf("moi ban nhap so c: ");
		scanf_s("%d", &c);
	      
		if (a > b && a > c)
		{
			printf("in ra so %d", a);
		}
		else if (b > a && b > c)
		{
			printf("in ra so %d", b);
		}
		else (c > a && c > b)
			printf("in ra so %d", c);

}