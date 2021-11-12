#include<stdio.h>
void main()
{
	int minutes;
	printf("enter minutes");
	scanf("%d",&minutes);
	printf("given %d minutes = %dhour and %dminutes",minutes, minutes/60, minutes%60);
	
}
