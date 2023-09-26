#include <stdio.h>
#include <math.h>

int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
float div(int x, int y);

int main()
{
	int int_result;
	float div_result;
	
	int_result = add(3, 4);
	printf("%d\n", int_result);
	
	int_result = sub(4, 3);
	printf("%d\n", int_result);
	
	int_result = mult(3, 4);
	printf("%d\n", int_result);
	
	div_result = div(4, 2);
	printf("%.2f\n", div_result);
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mult(int x, int y)
{
	return x * y;
}

float div(int x, int y)
{
	return x / y;
}