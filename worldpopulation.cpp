#include <stdio.h>
int main(){
	
	int worldPopulation[2][2][2] = {
										{
											{154,865},
											{452,857,698,767,146}
										},
										{
											{178,856,264,469,211},
											{985,452,269,489,531}
										}
									};
	int worldPopulationcount[2][2];
	
	printf("%d \t",worldPopulationcount[0][0][0]);
	
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			//worldPopulationcount[i][j] = 0;
//			for(int k=0;k<5;k++){
//				printf("%d \t",worldPopulationcount[i][j][k]);
//				//worldPopulationcount[i][j] += worldPopulation[i][j][k];
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	
/*	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d\t",worldPopulation[i][j]);
		}	
		printf("\n");
	}*/
	return 0;
}
