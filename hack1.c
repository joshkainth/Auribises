#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[100];
    int count = 0;
    scanf("%s",&str);   

    for(int i=0;str!='\0';i++){
        if(isdigit(str)||isalpha(str))
            count++;

        printf("\t%d",count);
        count = 0;
    }


    return 0;
}
