#include <stdio.h>

double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double med(double n1, double n2);


int main(){
	double n1, n2;
	char op;
	printf("Escolha uma operacao: \n+ adicao\n- subtracao\n/ divisao\n* multiplicacao\nm media\n");
	scanf("%c",&op);
	printf("Digite o primeiro numero: ");
	scanf("%lf",&n1);
	printf("Digite o segundo numero: ");
	scanf("%lf",&n2);
	switch(op){
		case '+':
			printf("A soma �: %.2f", soma(n1,n2));	
			break;
		case '-':
			printf("A subtracao �: %.2f", sub(n1,n2));	
			break;
		case '/':
			printf("A divisao �: %.2f", div(n1,n2));	
			break;
		case '*':
			printf("A multiplicacao �: %.2f", mult(n1,n2));	
			break;
		case 'm':
			printf("A media �: %.2f", med(n1,n2));	
			break;
			
		    default:
		    printf("A operacao � invalida");
	}
	/*
	if(op == '+'){
		printf("A soma �: %.2f", soma(n1,n2));		
	}else if(op == '-'){
		printf("A subtracao �: %.2f", sub(n1,n2));
    }else if(op == '/'){
		printf("A divisao �: %.2f", div(n1,n2));		
	}else if(op == '*'){
		printf("A multiplicacao �: %.2f", mult(n1,n2));
}
*/
	return 0;
}
double soma(double n1, double n2){
	
	return n1 + n2;
}
double sub(double n1, double n2){
	
	return n1 - n2;
}
double div(double n1, double n2){
	
	return n1 / n2; 
}
double mult(double n1, double n2){
	
	return n1 * n2;
}
double med(double n1, double n2){
	
	return (n1 + n2)/2;
}
