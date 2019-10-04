#include<stdio.h>
#define size 10
#define pi 3.14
#define appName "Whatsapp"
#define max(a,b)(a>b?a:b)

int main(){
    int array[size];
    printf(">> Size is: %d\n",size);
    printf(">> Max of 10 and 20: %d\n",max(10,20));

    return 0;
}