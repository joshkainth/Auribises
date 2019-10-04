#include<stdio.h>
int main(){
	
	int punjabPopulation[5] = {12314, 12411, 54323, 45432, 87856};
	int punjabCount = 0;
//	printf("Punjab Population is : %d",punjabPopulation);
	
	for(int i=0;i<5;i++){
		punjabCount += punjabPopulation[i];
		printf("Address of %d location is : %p\n",i,&punjabPopulation[i]);
	}
	
	printf("Population of Punjab : %d",punjabCount);
	
	return 0;
}
