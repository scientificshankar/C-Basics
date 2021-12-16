#include<stdio.h>
void main()
{
    int number;
	printf("enter a number");
	scanf("%d",&number);
	if (number == 1)
	{
		printf("monday",number);
	}
	else if (number == 2)
	{
		printf("tuesday",number);
	}
	else if (number == 3)
	{
		printf("wednesday",number);
		
	}
	else if (number == 4)
	{
		printf("thursday",number);
	}
	else if (number == 5)
	{
		printf("friday",number);
	}
	else if (number == 6)
	{
		printf("saturday",number);
	}
	else if (number == 7)
	{
		printf("sunday",number);
	}
	else
	{
		printf("not defined");
	}
}

