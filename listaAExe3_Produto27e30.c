#include <stdlib.h>
#include <stdio.h>

int main (void)

{
	int Numero30, Numero27, Produto;
	
	printf("Digite o numero 30: \n");
	printf("\n");
	scanf("%d", &Numero30);
	
	printf("\n");
	
	printf("Digite o numero 27: \n");
	printf("\n");
	scanf("%d", &Numero27);
	
	printf("\n");
	
	Produto=Numero30*Numero27;
	
	printf("O produto desses valores e: \n");
	printf("\n");
	printf("\n%d", Produto);
	
	printf("\n");
	
	system("pause");
	return 0;
}
