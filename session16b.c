#include <stdio.h>
int main(){

    FILE *fp;
    int length = 0;

    fp = fopen("session16.c","r");

    length = ftell(fp);
    printf(">> Length of File : %d\n",length);

    fseek(fp, 0, SEEK_END);

    length = ftell(fp);
    printf(">> Length of File : %d\n",length);

    fclose(fp);

    return 0;
}