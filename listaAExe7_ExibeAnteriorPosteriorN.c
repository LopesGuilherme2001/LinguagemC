#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int Numero, antecessor, sucessor;
	
	printf("Digite o numero: \n\n");
	scanf("%d", &Numero);
	printf("\n");
	
	antecessor=Numero-1;
	sucessor=Numero+1;
	
	printf("Seu antecessor e: \n");
	printf("\n%d", antecessor);
	printf("\n\n");
	
	printf("Seu sucessor e: \n");
	printf("\n%d", sucessor);
	printf("\n\n");
	
	system("pause");
	return 0; 
}
