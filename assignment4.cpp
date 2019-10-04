#include <stdio.h>
int main(){
	
	int n = 10,count = 0;
	int arr[n] = {0,1,2,3,4,5,6,7,8,9},arr1[n];
	int m = 4;
	
	for(int i=0;i<n;i+=m){
		arr1[i] = arr[i];
		arr[i] = '\0';
		//i = (i+m)%n;
	}
	
	for(int i=0;i<n;i+=m){
		printf("%d\t",arr1[i]);
	}
	
//	printf("\n");
//	for(int i=0;i<n;i++){
//		printf("%d\t",arr[i]);
//	}
	
}
