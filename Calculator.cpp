#include<stdio.h>
#include<math.h>

int main(void){


	/*
	Calculator
	*/
	char operation;
	int x,y;
	printf("Please Enter Values and Choose What You Want To Do \n + - * / mod p ");//For mod = %
	scanf("%d %c %d",&x,&operation,&y);
	
		switch(operation){
			
		case'+':
			printf("%d + %d = %d",x,y,x+y);
			
			break;
		case'-':
			printf("%d - %d = %d",x,y,x-y);
			
			break;
		case'*':
			printf("%d * %d =%d",x,y,x*y);
			break;
		case'/':
			printf("%d / %d =%.2f",x,y,(float)x/y);
			break;
		case'%':
			printf("%d mod %d = %d",x,y,x%y);
			break;
		case'p':
			printf("%d ^ %d =%d",x,y,(int)pow(x,y));
			break;
			default:
				printf("Please Enter Real Operation...");
	}
	
}













