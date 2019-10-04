#include<stdio.h>
int powerofnum(int num, int power){
		
	if(num==0)
		return 0;
	else if(power == 0)
		return 1;
	else
		return num*powerofnum(num,power-1);
		
	
	
}

int main(){
	
	int num,power;
	printf("Enter The Number : ");
	scanf("%d",&num);
	printf("Enter the Power : ");
	scanf("%d",&power);
	
	int result = powerofnum(num,power);
	printf("%d Power to %d is: %d \n",power, num, result);
	
	return 0;
}
