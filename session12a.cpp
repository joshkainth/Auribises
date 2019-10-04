#include<stdio.h>
int main(){
	
	char name[20];
	char email[20];
	char phone[20];
	int i=0;
	int j=0;
	printf("enter your name : ");
	scanf("%[^\n]s",name);
	
	while(name[i] != '\0'){
		i++;
	}
	
	if(i >=3)
		printf("Name is: %s\n",name);
	else
		printf("Invalid Name");
	printf("enter your email : ");
	scanf("%s",email);
	
	while(email[j] == '@'){
		return 1;
	}
	while(email[j] == '.'){
		return 2;
	}
	if(j == 1 && j==2)
		printf("email is: %s\n",email);
	else
		printf("Invalid email");
		
	
	//printf("enter your phone : ");
	//scanf("%s",phone);
	
	
	
	//printf(" your details: %s | %s | %s ",name,email,phone);
	

		
	
	return 0;
}
