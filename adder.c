#include<stdio.h>

void adder(int *, int *, int *);

int main()
{
	int number;
	
	int number2;
	
	int sum = 0;
	
	printf("Please enter the number:\n");
	
	scanf("%d", &number);
	
	printf("Please enter the other number:\n");
	
	scanf("%d", &number2);
	
	adder(&number, &number2, &sum);
	
	printf("The sum of two number is %d\n", sum);
	return 0;
}


void adder(int *pointer, int *pointer2, int *pointer3)
{
	*pointer3 = *pointer + *pointer2;
}