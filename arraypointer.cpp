#include <stdio.h>
int main(){
	
	int arr[2][4] = {{154,654,147,698},{456,326,789,658}};
	
	int* ptr = arr[0];
	int** pptr = &ptr;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			*ptr = *ptr * *ptr;
			printf("%d\t",*ptr);
			ptr++;
		}
		//ptr++;
		printf("\n");
	}
	
}
