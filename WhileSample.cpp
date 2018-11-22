#include<stdio.h>

int main (){

	
	/*
	 The algorithm that calculates and collects the squares of the numbers up to the entered value.
	*/
	int i,value;
	int total=0;
	printf("Please Enter a Number");
	scanf("%d",&value);
	//i = 1;
	while(0<value){
	total = total+value*value;
	printf("%d ^ %d = %d \n",value,value,value*value);
	value--;
	}	
	printf("-->total=%d \n",total);
}
