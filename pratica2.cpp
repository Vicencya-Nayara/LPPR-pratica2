#include <stdio.h>

int dobro(int num1, int num2){
	int d;
	if(num1>num2){
		d = num1 * 2;
		return d;
		
	}else{
		d = num2 * 2;
		return d;
	}
}

int main(){
	int n1, n2, x;
	printf("Digite o numero: ");
	scanf("%d", &n1);
	
	printf("Digite o numero: ");
	scanf("%d", &n2);
	
	x = dobro(n1,n2);
	printf("O valor é: %d\n", x);
	
	return 0;
}
