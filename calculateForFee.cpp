#include<stdio.h>

int main(void){
	
	/*
	calculate for fee
	*/
	int hour,name,fee;
	char isim;
	printf("Name , Hour and fee values access = ");
	scanf("%c %d %d",&name,&hour,&fee);
	int totalPay = hour*fee;
	printf("%c person's total fee =%d",name,totalPay);	
	getchar();
}
