#include<stdio.h>
int main(){
	int a,fact =1,b;
	printf("Enter the Number : ");
	scanf("%d",&b);
	for(a=1;a<=b;a++){
		fact = fact*a;
		//printf("%d",fact);
	}
	
	printf("Factorial of %d : %d",b,fact);
}
