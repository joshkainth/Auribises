#include<stdio.h>
int main()
{

    int n=0;
    printf("Enter Number of Element : ");
    scanf("%d",&n);

    int *ptr = (int*)malloc(n*sizeof(int)); // help to get the chunk memory
    //int *ptr = (int*)calloc(n,sizeof(int)); // help to get the blocks of memory
    // ptr = (int*)realloc((n*n)*sizeof(int));
    // calloc | realloc
    int sum = 0;

    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }

    printf("Sum : %d",sum);

    // Delete the Memory allocated
    free(ptr);

    return 0;
}
