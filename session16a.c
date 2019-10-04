#include <stdio.h>
int main(){

    FILE *fp;
    char textinfile[1024];

    fp = fopen("student.csv","r");
    printf("%s", fgets(textinfile,100,fp));

    fclose(fp);

    return 0;
}