#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);

int main()
{
	int result;
	
	result = add(3, 4);
	printf("%d\n", result);
	
	result = sub(4, 3);
	printf("%d\n", result);
	
	result = mult(3, 4);
	printf("%d\n", result);
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