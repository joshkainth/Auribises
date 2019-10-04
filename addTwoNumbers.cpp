#include<stdio.h>
int main(){
    
    int firstnum, secondnum,sum;
    
    printf("Enter the First Number : ");
    scanf("%d",&firstnum);
    printf("Enter the Second Number : ");
    scanf("%d",&secondnum);
    
    sum = firstnum + secondnum;
    printf("Sum of Two Number : %d",sum);
    
    return 0;
}
