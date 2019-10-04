#include<stdio.h>
int main()
{

    int n=0;
    printf("Enter Number of Element : ");
    scanf("%d",&n);

    int number[n];
    int sum = 0;

    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
        sum += number[i];
    }

    printf("Sum : %d",sum);

    return 0;
}
