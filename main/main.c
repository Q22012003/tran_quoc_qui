#include<Stdio.h>


// tao ra kieu du lieu con tro ham  - con tro ham dung de chua dia chi cua ham co output :float , input :float

typedef float (*function_pointer_t)(float);
float fx(float x)
{
	return x * x;
}
float gx(float x)
{
	return 2 * x * x + 3 * x + 1;
}
float tx(float x)
{
	return sin(x) + 1;
}
float tinhtichphan(int a, int b,function_pointer_t pfunc)
{
	float h = (b - a) / 1000.0f;
	float s = 0;
	for (int i = 0; i < 1000; i++)
	{
		float db = fx(a + i * h);
		float dl = fx(a + (i + 1) * h);
		s += ((dl + db) / 2 * h);
	}
	return s;
}


void main() {
	
	tinhtichphan(1, 2, gx);
	
	
}