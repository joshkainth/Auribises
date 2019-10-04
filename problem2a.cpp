#include<stdio.h>
#include<string.h>

int main(){
	char str[1024] = "mnnnnnnnnnmnmnnnnnm";
	int arr[6], mCounter = 0;
	
	int sub = 0;
	
//	for(int i=0;str[i]!='\0';i++){
//		if(str[i] == 'm'){
//			arr[i] = i;
//			mCounter++;
//		}
//		
//	}
	for(int i=0;str[i]!='\0';i++){
		printf("Character %c at index %d\t\n",str[i],i);
	}
//	int highest = arr[0];
//	for(int i=0;i<6;i++){
//		if(arr[i] > highest)
//			highest = arr[i];
//	}
//	
//	printf("\nHighest : %d",highest);	
	//printf("\n%d",mCounter);
	return 0;
}
