#include<stdio.h>
#include<string.h>

int main(){
	char str[1024] = "mnnnnnnnnnmnmnnnnnm";
	int arr[6], mCounter = 0;
	
	int sub = 0,j=0;
	
//	for(int i=0;str[i]!='\0';i++){
//		if(str[i] == 'm'){
////			sub = i - sub;
//			arr[i] = i;
//			mCounter++;
//		}
//		
//	}

	while(str[j]!='\0'){
		if(str[j]=='m'){
			arr[j] = j;
			mCounter++;
		}
		j++;
	}
	for(int i=0;i<mCounter;i++){
		printf("%d\t",arr[i]);
	}
//	int highest = arr[0];
//	for(int i=0;i<6;i++){
//		if(arr[i] > highest)
//			highest = arr[i];
//	}
//	
//	printf("\nHighest : %d",highest);	
	printf("\n%d",mCounter);
	return 0;
}
