#include<stdio.h>
int main(){
	int teamScore[10];
	int idx = 0;
	
	while(idx<10){
		printf("Enter the Score Of Cricketer %d : ",idx+1);
		scanf("%d",&teamScore[idx]);
		idx++;
	}
	
	printf("==========================\n");
	printf("Thank You for Updating the Scores\n");
	printf("==========================\n");
	
	idx = 0;
	int score = 0;
	int highestscore,lowestscore;
	
	while(idx<10){
		printf("Scores of cricketer %d : %d\n",idx+1,teamScore[idx]);
		idx++;
		score += teamScore[idx];
	}
	
	printf("==========================\n");
	printf("Total Score of the team : %d \n",score);
	printf("==========================\n");
}
