#include <stdio.h>
int main(){

    FILE *fp;

    fp = fopen("student.csv","w");
    fputs("john, 47852 47896, john@example.com\n", fp);

    printf("File Created.....");
    fclose(fp);

    return 0;
}