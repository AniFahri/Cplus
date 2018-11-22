#include<stdio.h>

int main(void){
	
	/*
Course Note Calculator
*/
	int point;
	printf("enter course score");
	scanf("%d",&point);
	
	if(point<=100 && point>=0){
	
		switch(point/10){
		case 10:
			printf("A++");
			break;
		case 9:
			printf("A+");
			break;
		case 8:
			printf("A");
			break;
		case 7:
			printf("B");
			break;
		case 6:
			printf("C");
			break;
		case 5:
			printf("D");
			break;

		default:
			printf("F");
			
		}
	}else{	
		printf("Please 0 - 100 enter");
	}
}
