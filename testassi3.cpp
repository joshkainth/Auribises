#include<stdio.h>
void constructWall(int numofBricks){
	int jacksBrick,totalBrick,johnsBrick;
	for(int i=1;i<=numofBricks;i++){
		johnsBrick = i;
		printf("John Planted %d bricks \n",johnsBrick);
		totalBrick = totalBrick + johnsBrick;
		jacksBrick = 2 * johnsBrick;
		totalBrick = totalBrick + jacksBrick;
		printf("Jack Planted %d bricks\n",jacksBrick);
		
		
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
