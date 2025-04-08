#include<stdio.h>


typedef union {
	unsigned short x;
	unsigned char y[2];
}union_t;

void main()
{
	unsigned short val = 0x1234;
	unsigned char low = 0x34;
	unsigned char high = 0x12;

	union_t sv;
	sv.x = val;
	high=sv.
	sv.y_low = low;

	printf("0x%s", sv.y_high);
	printf("\n0x%s", sv.y_low);


}