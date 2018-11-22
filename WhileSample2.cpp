#include<stdio.h>

int main (){

	
	
	//Learn which numbers to divide
	//split number = Split
	int i,split,dividing1,dividing2;
	printf("Please Enter a Number");
	scanf("%d",&split);
	printf("Type in which numbers to divide");
	scanf("%d %d",&dividing1,&dividing2);
	i = 1;
	
	while(i<=split){
	if(i%dividing1 == 0 || i%dividing2 == 0){
		printf("%d numbers divided by %d or %d\n",i,dividing1,dividing2);
	}
	
	i++;
	}
}

