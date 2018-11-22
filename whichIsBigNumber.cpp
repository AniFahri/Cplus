#include<stdio.h>

int main(void){
	
	
	
	
	int x,y,z;
	printf("x , y and z Please Enter = ");
	scanf("%d %d %d",&x,&y,&z);
	
	if(x > y && x > z){
		printf("x=%d Big ",x);
	}else if (y > z){
		printf("y=%d Big ",y);
	}else{
		printf("z=%d Big",z);
	}
getchar();
}
