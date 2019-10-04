#include<stdio.h>

int main(){
	
	FILE *filePtr;
	char ch;
	int leftcounter=0;
	int rightcounter=0;
	
	filePtr = fopen("session14.cpp","r");
	
	while(1){
		ch = fgetc(filePtr);
		printf("%c",ch);
		if(ch == '{'){
			leftcounter++;
		}
		else if(ch == '}'){
			rightcounter++;
		}
		
		// EOF : End of file 
		// fgetc : Get character from file
		if(ch == EOF){
			break;
		}
	}
	
	fclose(filePtr);
	if(leftcounter == rightcounter)
		printf("No Syntax Error");
	else
		printf("Some Brackets is Missing");
	return 0;
}
