#include<stdio.h>
int main(){
	
	char name[20];
	char email[20];
	char phone[20];
	
	printf("enter your name : ");
	scanf("%[^\n]s",name);
	printf("enter your email : ");
	scanf("%s",email);
	printf("enter your phone : ");
	scanf("%[^\n]s",phone);
	
	printf(" your details: %s | %s| %s",name ,email,phone);
	return 0;
}
