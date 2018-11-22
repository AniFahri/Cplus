#include<stdio.h>

int main (){

	 
	 /*
	 factorial algorithm
	 */
	int i,value;
	int factorial=1;
	printf("Please Enter a Number");
	scanf("%d",&value);
	i = 1;
	for(;i<=value;){
	factorial = factorial*i;
	printf("%d != %d \n",i,factorial);
	i++;
	}
}
