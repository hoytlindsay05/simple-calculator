#include <stdio.h>
#include <math.h>

int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
float div(int x, int y);

int main()
{
	int int_result, input, num1, num2;
	float div_result;
	
	printf("Select Operation:\n");
	printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
	scanf("%d", &input);
	
	switch(input)
	{
		case 1:
			printf("Enter first value\n");
			scanf("%d", &num1);
			printf("Enter second value\n");
			scanf("%d", &num2);
			
			int_result = add(num1, num2);
			printf("%d\n", int_result);
			break;
		case 2:
			printf("Enter first value\n");
			scanf("%d", &num1);
			printf("Enter second value\n");
			scanf("%d", &num2);
			
			int_result = sub(num1, num2);
			printf("%d\n", int_result);
			break;
		case 3:
			printf("Enter first value\n");
			scanf("%d", &num1);
			printf("Enter second value\n");
			scanf("%d", &num2);
			
			int_result = mult(num1, num2);
			printf("%d\n", int_result);
			break;
		case 4:
			printf("Enter first value\n");
			scanf("%d", &num1);
			printf("Enter second value\n");
			scanf("%d", &num2);
			
			if (num2 == 0)
			{
				printf("Error: Division by 0\n");
				break;
			}
			
			div_result = div(num1, num2);
			printf("%.2f\n", div_result);
			break;
		default:
			printf("Invalid input\n");
	}
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