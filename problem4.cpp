#include<stdio.h>

int main(){
	int liability = 48000;
	int rent = 4000;
	int payable = 10000;
	int emi = payable-rent;
	
	int arr[1024];
	int month = 1;
	
	while(liability >= emi){
		liability -= emi;
		arr[month] = liability;
		month++;
	}
	printf("So all Installments are Shown Below : \n");
	while(month >0){
		printf("%d\t",arr[month]);
		month--;
	}
	
}
