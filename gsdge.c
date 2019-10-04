#include<stdio.h>
int main()
{
	int amount,net,tax;
	printf("Enter your amount");
	scanf("%d",&amount);
	tax=(amount*18)/100;
	net=amount-tax;
	printf("The Net amount is %d",net);	
	return 0;
}
