#include<stdio.h>
int main(){
	
	int num1 = 10;
	int num2 = 20;
	
	const int* ptr = &num1;
	
	ptr = &num2;
	*ptr = 111;
	
	printf("num1 is: %d\n",num1);
	printf("num2 is: %d\n",num2);
	printf("*ptr is: %d\n",*ptr);
	
	return 0;
}
