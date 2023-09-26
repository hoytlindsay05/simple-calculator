#include <stdio.h>
#include <math.h>

//Funcion declarations
int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
float div(int x, int y);

int main()
{
	//Declare variables for input and results
	int int_result, input, num1, num2;
	float div_result;
	
	//Query the user for which opperation to use
	printf("Select Operation:\n");
	printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
	scanf("%d", &input);
	
	//Switch case for opperations
	switch(input)
	{
		//Addition case
		case 1:
			//Query user for first two values and check for valid input
			printf("Enter first value\n");
			if (scanf("%d", &num1) != 1)
			{
				printf("Invalid input");
				break;
			}
			printf("Enter second value\n");
			if (scanf("%d", &num2) != 1)
			{
				printf("Invalid input");
				break;
			}
			
			int_result = add(num1, num2);
			printf("%d\n", int_result);
			break;
		//Subtraction case
		case 2:
			//Query user for first two values and check for valid input
			printf("Enter first value\n");
			if (scanf("%d", &num1) != 1)
			{
				printf("Invalid input");
				break;
			}
			printf("Enter second value\n");
			if (scanf("%d", &num2) != 1)
			{
				printf("Invalid input");
				break;
			}
			
			int_result = sub(num1, num2);
			printf("%d\n", int_result);
			break;
		//Multiplication case
		case 3:
			//Query user for first two values and check for valid input
			printf("Enter first value\n");
			if (scanf("%d", &num1) != 1)
			{
				printf("Invalid input");
				break;
			}
			printf("Enter second value\n");
			if (scanf("%d", &num2) != 1)
			{
				printf("Invalid input");
				break;
			}
			
			int_result = mult(num1, num2);
			printf("%d\n", int_result);
			break;
		//Division case
		case 4:
			//Query user for first two values and check for valid input
			printf("Enter first value\n");
			if (scanf("%d", &num1) != 1)
			{
				printf("Invalid input");
				break;
			}
			printf("Enter second value\n");
			if (scanf("%d", &num2) != 1)
			{
				printf("Invalid input");
				break;
			}
			
			//Check for division by 0 error
			if (num2 == 0)
			{
				printf("Error: Division by 0\n");
				break;
			}
			
			div_result = div(num1, num2);
			printf("%.2f\n", div_result);
			break;
		//User did not enter 1, 2, 3, or 4
		default:
			printf("Invalid input\n");
	}
	return 0;
}

//Addition funciton
int add(int x, int y)
{
	return x + y;
}

//Subtraction function
int sub(int x, int y)
{
	return x - y;
}

//Multiplication function
int mult(int x, int y)
{
	return x * y;
}

//Division function
float div(int x, int y)
{
	return x / y;
}