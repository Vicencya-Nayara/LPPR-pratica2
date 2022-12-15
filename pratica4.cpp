#include <stdio.h>

int maior_num (int num1, int num2){
	if(num1>num2){
		printf("%d", num1);
		return num1;
	}else{
		printf("%d", num2);
		return num2;
	}
}
int main(){
	int n1, n2, x;
	printf("Digite o numero: ");
	scanf("%d", &n1);
	
	printf("Digite o numero: ");
	scanf("%d", &n2);
	
	x = maior_num(n1,n2);
	
	return 0;
}
