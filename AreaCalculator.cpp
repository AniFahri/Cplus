#include<stdio.h>
#include<math.h>

int main(void){
	/*
	Area Calculator 
	*/
	char selection;
	float x,y;
	printf("Please Enter Values and Choose What You Want To Do \ntriangle = t Rectangle = r Circle = c");// \n Next Row
	scanf("%f %f %c",&x,&y,&selection);

	
		switch(selection){
			
		case't':
			printf("Area = x*y/2=%.2f",x*y/2);
			
			break;
		case'r':
			printf("Area = x*y=%.2f",x*y);
			
			break;
		case'c':
			printf("Area = pi*x^2=%.2f",3.14*pow(x,2)); //pow from math library
			break;




		default:
			printf("Please Enter a Defined Value");
	}
}
