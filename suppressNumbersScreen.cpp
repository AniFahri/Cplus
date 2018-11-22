#include<stdio.h>

int main(void){
	
	/*	
	"%d"  for read integer 
	"%f"   for read float
	*/
	
	int x;
	float y;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	printf("Enter the value of y = ");
	scanf("%f",&y);
	printf("a = %d , b = %f",x,y);
	getchar();
}
