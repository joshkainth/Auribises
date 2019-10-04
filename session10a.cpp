#include<stdio.h>
int main(){
	
//	int punjabPopulation[5] = {12314, 12411, 54323, 45432, 87856};
//	int punjabCount = 0;
////	printf("Punjab Population is : %d",punjabPopulation);
//	
//	for(int i=0;i<5;i++){
//		punjabCount += punjabPopulation[i];
//		printf("Address of %d location is : %p\n",i,&punjabPopulation[i]);
//	}
//	
//	printf("Population of Punjab : %d",punjabCount);

	int indiapopulation[2][5] = {{12314, 12411, 54323, 45432, 87856},{1521,6532,4875,9856,1563}};
	
	int indiapopulationcount[2],count=0;
	
	printf("element at 0th array's 2nd index: %d\n",indiapopulation[0][2]);
	
	
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			printf("element at %d array's %d index : %d and adress: %p\n",i,j,indiapopulation[i][j],&indiapopulation[i][j]);
			//printf("element at %d array's %d index : %d\n",i,j,indiapopulation[i][j]);
			count += indiapopulation[i][j];
		}
		indiapopulationcount[i] = count;
		count = 0;
	}
	
	if(indiapopulationcount[0] > indiapopulationcount[1])
		printf("Population of punjab is higher than himachal");
	else
		printf("Population of Himachal is higher than punjab");
	
	return 0;
}
