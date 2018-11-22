#include<stdio.h>

int main(void){
	
	int x,y;
	float chamber;
	printf("x and y Please Enter = ");
	scanf("%d %d",&x,&y);
	if(y != 0){
		chamber = (float)x/y;
		printf("chamber=%.2f",chamber);
	}else{
		printf("y =0 Girdiniz");
	}
	getchar();
	
}















