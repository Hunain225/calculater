#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		char operater;
		int  num1,num2;
		printf("Enter operater(+,-,*,/)\t");
		scanf("%c",&operater);
		printf("Enter Two Numbers\t");
		scanf("%d %d",&num2,&num1);
	 if(operater == '+')
	{
	 	printf(" Your result is:\t %d",num1+num2);
	 
	}
	 else if(operater == '-')
	{
	 	printf(" Your result is:\t %d",num1-num2);
	 
	}
	 else if(operater == '*')
	{
	 	printf(" Your result is:\t %d",num1*num2);
	 
	}
	 else if(operater == '/')
	{
	 	printf(" Your result is:\t %d",num1/num2);
	 
	}
	 else if(operater == '+')
	{
	 	printf(" Your result is:\t %d",num1+num2);
	 
	}
	 else 
	{
		printf("Please Enter correct operater");
	}

		return 0;
	}
