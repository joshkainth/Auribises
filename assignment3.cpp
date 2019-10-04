#include<stdio.h>
void constructWall(int numofBricks){
	int jacksBrick,totalBrick;
	for(int johnsBrick=1;johnsBrick<=numofBricks;johnsBrick++)
	{
		
		printf("John Planted %d bricks \n",johnsBrick);
		totalBrick = totalBrick + johnsBrick;
		jacksBrick = 2 * johnsBrick;
		printf("Jack Planted %d bricks\n",jacksBrick);
		
		totalBrick = totalBrick + jacksBrick;
		printf(">> Total Brick planted By John and Jack %d Bricks\n",totalBrick);
		
		if(totalBrick <= numofBricks){
			break;
		}
	}
}

int main(){
	
	int Bricks;
	printf("Enter the Number Of Bricks : ");
	scanf("%d",&Bricks);
	
	constructWall(Bricks);
	
	return 0;
}
