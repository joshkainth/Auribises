#include<stdio.h>
int main(){
	int amount; 
	float tax,net;
	printf("Enter the Amount : ");
	scanf("%d",&amount);
	printf("Enter the Tax : ");
	scanf("%f",&tax);
	int dis = amount - (amount*tax)/100;
	printf("%d",dis);
	
	//return 0;
}
