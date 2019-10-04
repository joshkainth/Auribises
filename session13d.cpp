// Constant Pointer, Pointing to a Constant
#include<stdio.h>
int main(){
	
	const int num1 = 10;
	int num2 = 20;
	
	const int* const ptr = &num1;
	
	ptr = &num2;	//error
	*ptr = 111;		//error
	
	printf("num1 is: %d\n",num1);
	printf("num2 is: %d\n",num2);
	printf("*ptr is: %d\n",*ptr);
	
	return 0;
}
