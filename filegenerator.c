#include<stdio.h>
int main(){
    
    FILE *fileptr;
    FILE *gfileptr;
    fileptr = fopen("addTwonumber.c","r");
    gfileptr = fopen("generatedFile.c","w");

    char ch;
    // ch = fgetc(fileptr);
    while ((ch = fgetc(fileptr))!= EOF)
        fputc(ch,gfileptr);  
        
    printf("File Generated Successfully");
    
    fclose(fileptr);
    fclose(gfileptr);
    return 0;
}