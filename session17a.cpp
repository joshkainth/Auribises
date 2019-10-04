#include<stdio.h>
struct email{
	char from[100];
    char to[100];
    char subject[100];
    char description[1024];
};
int main(){
	
	struct email e1[100];
	
    for(int i=0;i<2;i++){
        printf("==========================\n");
        printf("Enter the Details of Customer %d\n",i+1);
        printf("==========================\n");
        printf(">> Enter Your Email : ");
        scanf("%s",&e1[i].from);
        printf(">> Enter the email you have to send : ");
        scanf("%s",&e1[i].to);
        printf(">> Enter Subject of email : \n");
        scanf("%[^\n]%*c",e1[i].subject);
        printf(">> Enter Description of Email : \n");
        scanf("%[^\n]%*c",e1[i].description);
       // printf("==========================\n");
    }
    for(int i=0;i<2;i++){
        printf("==========================\n");
        printf("Details of Customer %d\n",i+1);
        //printf(">>Email :\n from : %s \n to:  %s \n subject : \n",e1[i].from,e1[i].to,e1[i].subject);
        printf("Email Subject : %s\n",e1[i].subject);
		printf("Email Description : %s",e1[i].description);
        printf("==========================\n");
    }


    return 0;
}
