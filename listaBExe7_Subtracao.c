#include <stdio.h>
#include <stdlib.h>

int main (void)

{
	int NumeroA, NumeroB, Resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &NumeroA);
		
	printf("Digite o segundo numero: ");
	scanf("%d", &NumeroB);
		
	Resultado = NumeroA - NumeroB;
	
	printf("O resultado da subtracao e: %d\n", Resultado);
	
	system("pause");
	return 0;
}
