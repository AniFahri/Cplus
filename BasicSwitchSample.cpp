#include<stdio.h>

int main(void){
	
	/*Switch Sample	
	*/
	char character;
	printf("Character Please Enter");
	scanf("%c",&character);
	
	switch(character){//according to this
		case 'a'://condition
			printf("a");//Operation
			break;
		case 'b'://condition
			printf("b");//Operation
			break;
		case 'c'://condition
			printf("c");//Operation
			break;
		case 'd'://condition
			printf("d");//Operation
			break;
		case 'e'://condition
			printf("e");//Operation
			break;

		default:
			printf("Gecerli Bir Deger Girin");
			
	}
}

