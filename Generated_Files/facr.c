#include<stdio.h>
int fact(int f);
int main(){
	int a,b; /*arguement and return*/
	printf("Enter the value : ");
	scanf("%d",&a);
    b = fact(a);
	printf("%d",b);
}
int fact(int f){
	if(f==1){
		return 1;
	}
	else {
		f = f*fact(f-1);
		return f;
	}
}
