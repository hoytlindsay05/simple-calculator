#include <stdio.h>

int add(int x, int y);

int main()
{
	int result;
	
	result = add (3, 4);
	printf("%d", result);
	return 0;
}

int add(int x, int y)
{
	return x + y;
}