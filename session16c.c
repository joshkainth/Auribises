#include <stdio.h>
int main(){

    FILE *fp;
    int length = 0;

    fp = fopen("customer.txt","w+");

    fputs("This is quite a hectic day !!",fp);
    fseek(fp, 7, SEEK_SET);

    fputs("Awesome Day !!",fp);
    printf(">> File Written\n");

    fclose(fp);

    return 0;
}