#include<stdio.h>
struct person
{
    char name[300];
    char email[300];
    char mobile[15];
}details;


int main(){

    FILE *fp;
    

    printf("Enter Your Name : \n");
    scanf("%[^\n]%*c",&details.name);

    printf("Enter Your Email : \n");
    scanf("%[^\n]%*c",&details.email);

    printf("Enter Your Mobile Number : \n");
    scanf("%[^\n]%*c",&details.mobile);

    fp = fopen("data.csv","w+"); 

    fwrite(&details,sizeof(details),1, fp);
    

    //printf(">> Data Written in File");
    fclose(fp);
}