#include<stdio.h>

int main(void){
	

	
	
	int age;
	printf("Age Please Enter = ");
	scanf("%d",&age);
	if(age > 0){
	
	if(age < 18){
		printf("Your Lucky");
	}else if (age < 65){
		printf("You Are Young ");
	}else if(age >= 65){
		printf("Time Of Holiday");
	}

	}else{
	printf("Age Can't be less than 0 or 0");
	}
		
getchar();
}
