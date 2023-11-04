<#include <stdio.h>

void determinar_pares_impares(int num1, int num2, int num3)
{
	if(num1 % 2 == 0) {
		printf("%d es par.\n", num1);
	} else {
		printf("%d es impar.\n", num1);
	}
	
	if(num2 % 2 == 0) {
		printf("%d es par.\n", num2);
	} else {
		printf("%d es impar.\n", num2);
	}
	
	if(num3 % 2 == 0) {
		printf("%d es par.\n", num3);
	} else {
		printf("%d es impar.\n", num3);
	}
}

int main()
{
	int num1, num2, num3;
	printf("Introduzca tres enteros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	determinar_pares_impares(num1, num2, num3);
	
	return 0;
}
