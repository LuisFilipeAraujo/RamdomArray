#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 100000

//Array RANDOM- TESTE DE CPU E RAM
int main (void)

{
	clock_t t; //variavel para armazenar tempo
	
	int array[TAMANHO];
	int i;
	printf("Teste de  CPU  e RAM com array float RANDOM de %d elementos\n", TAMANHO);
	
	srand(time(0));
	
	for(i=0; i<TAMANHO; i++)
	{
		array[i] = rand();
		
	}
	
	for(i=0; i<TAMANHO; i++)
	{
		printf("\n%d", array[i]);
	}
	
	t = clock(); //armazena tempo
	t = clock() - t; //tempo final - tempo inicial
	
 	//imprime o tempo na tela
 	printf("\nTempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
	return 0;
}
