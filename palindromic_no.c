//program for check the no. is palindrom or not

#include <stdio.h> //header file

int main()
{
	int num = 0, reverse = 0, temp, t;

	//Input condition
	while (num < 1)
	{
		printf("Input: ");
		scanf("%d", &num);
	}

 	//copy of input no. for check the condition
 	temp = num; 

	while (num != 0)
	{
 		t = num % 10;
 		reverse = reverse * 10 + t;
 		num = num / 10;
	}

	//checking the condition is no. palindrom or not
	if (temp == reverse)
	{
		printf("Number is palindrom: %d", reverse);
	}
	else
	{
		printf("Number is not palindrom: %d", reverse);
	}

}
