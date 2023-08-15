#include <stdio.h>

int main(){

	printf("Digite um numero para iniciar \n");
	printf("Para finalizar digite um numero maior que o primeiro numero digitado");
	
	int inicial, final, contador, quantidadePares = 0;
	
	printf("\nDigite o numero inicial:\n");
	scanf("%d", &inicial);
	
	printf("\nDigite o numero final:\n");
	scanf("%d", &final);
	 
	 while(final <= inicial){
	 	printf("\nDigite um valor valido maior que o valor inicial:\n");
	 	printf("\nDigite o numero final:\n");
		scanf("%d", &final);
	 }
	 
	 for(contador = inicial; contador <= final; contador++){
	 	if(contador%2==0){
	 		printf("O numero %d e PAR!!!\n", contador);
	 		quantidadePares++;
	 	
		 }
		 else{
		 	printf("O numero %d e IMPAR!!!\n", contador);
		 }
	 }

				printf("A quantidade de numeros pares\n e %d", quantidadePares);
				return(0);
}
