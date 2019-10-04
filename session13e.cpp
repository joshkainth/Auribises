#include<stdio.h>
void calculateArea(int side){
	printf("%s %d\n", "Area of Sqaure : ",side*side);	
}

float calculate(float length, float breath){
	float area = length*breath;
	return area;
}

int main(){
	
	//calculateArea(5);
	// Pointer To a Function
	void (*fptr)(int) = &calculateArea;
	(*fptr)(11); // Exceution of Function and Enchances the Security of the program
	
	float (*fpptr)(float, float) = &calculate;
	float b = (*fpptr)(15.2,21.3);
	printf("Area of Rectangle : %f",b);
	
	return 0;
}
