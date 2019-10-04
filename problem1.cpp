#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main(){
	int spaceCounter = 0;
	int isCounter = 0;
	int amCounter = 0;
	int theCounter = 0, wordCounter = 0, areCounter = 0;
	int i;
	char str[1024];
	printf("Enter your Sentence : \n");
	scanf("%[^\n]s",str);
	
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			spaceCounter++;
		}
		
		if(str[i]=='is'){
			isCounter++;
		}
		
//		if(str[i]== 'a'&&'m'){
//			amCounter++;
//		}
//		if(str[i] == 'are'){
//			areCounter++;
//		}
//		if(str[i] == 'the' || str[i] == 'The'){
//			theCounter++;
//		}
	}
	printf("Number Of Words : %d\n",spaceCounter+1);
	printf("No of Spaces in sentence : %d\n",spaceCounter);
	printf("No of is in Sentence : %d\n",isCounter);
	printf("No of am in sentence : %d\n",amCounter);
	printf("No of are in sentence : %d\n",areCounter);
	printf("No of the in sentence : %d\n",theCounter);
	
	printf("%s",str);
	return 0;
}

