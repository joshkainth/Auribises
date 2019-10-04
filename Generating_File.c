#include <stdio.h>
#include <string.h>

int main(){
    char ch, fileName[1024];
    FILE *SourceFile, *TargetFile;

    printf("Enter the File Name with Extension .c : ");
    scanf("%[^\n]s",&fileName);

    printf("Select Choice for File Generating :) \n");
    printf("1. Add Two Number\n");
    printf("2. Program To find Factorial of Number \n");
    printf("3. Program To Find Factorial Of Number using Recursion \n");
    printf("4. Program to write Fibonacci Series\n");
    printf("5. Program to write Fibonacci Series using recursion\n");
    
    int choice;
    printf("Enter Your Choice Here : ");
    scanf("%d",&choice);

    TargetFile = fopen(fileName,"w");

    switch(choice){
        case 1: {
            SourceFile = fopen("addTwoNumber.c","r");
            while ((ch = fgetc(SourceFile)) != EOF){
                fputc(ch,TargetFile);
            }
            break;
        }
        case 2: {
            SourceFile = fopen("D:\\Programmes\\Dev_C++\\fibo.cpp","r");
            while ((ch = fgetc(SourceFile)) != EOF){
                fputc(ch,TargetFile);
            }
            break;
        }
        case 3: {
            SourceFile = fopen("D:\\Programmes\\Dev_C++\\fiborecurrsion.cpp","r");
            while ((ch = fgetc(SourceFile)) != EOF){
                fputc(ch,TargetFile);
            }
            break;
        }
        case 4: {
            SourceFile = fopen("D:\\Programmes\\Dev_C++\\factorial.cpp","r");
            while ((ch = fgetc(SourceFile)) != EOF){
                fputc(ch,TargetFile);
            }
            break;
        }
        case 5: {
            SourceFile = fopen("D:\\Programmes\\Dev_C++\\FACTRECURSION.cpp","r");
            while ((ch = fgetc(SourceFile)) != EOF){
                fputc(ch,TargetFile);
            }
            break;
        }
        default: printf("Invalid Choice");
            break;
    }

    printf("File Generated Successfully");

    fclose(SourceFile);
    fclose(TargetFile);
    return 0;
}