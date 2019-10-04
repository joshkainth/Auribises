#include<stdio.h>

int main(){

    char names[5][100];
    int age[5];
    //int i;
    
    for(int i=0;i<2;i++){
        printf("==========================\n");
        printf("Enter the Details of Customer %d\n",i+1);
        printf("==========================\n");
        printf(">> Enter Customer Name : ");
        scanf("%s",&names[i]);
        printf(">> Enter Customer Age : ");
        scanf("%d",&age[i]);
       // printf("==========================\n");
    }
    for(int i=0;i<2;i++){
        printf("==========================\n");
        printf("Details of Customer %d\n",i+1);
        printf(">>Customer Details : %s | %d\n",names[i],age[i]);
        printf("==========================\n");
    }


    return 0;
}
