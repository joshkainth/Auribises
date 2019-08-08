#include<stdio.h>
int main(){
	int amount; 
	float tax,net;
	printf("Enter the Amount : ");
	scanf("%d",&amount);
	printf("Enter the Tax : ");
	scanf("%f",&tax);
	int dis = (amount*100)/(100+tax);
	printf("%d",dis);
}
