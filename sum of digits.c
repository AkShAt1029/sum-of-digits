#include<stdio.h>
int sum(int);
int main()
{
	int num,result;
	printf("Enter the no.: ");
	scanf("%d",&num);
	result=sum(num);
	printf("sum of digits is %d",result);
	return 0;
}
int sum(int num)
{
	if(num!=0)
	{
		return(num%10 + sum(num/10));
	}
	else
	{
		return 0;
	}
}
