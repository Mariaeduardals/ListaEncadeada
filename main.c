	#include <stdio.h>
	#include <stdlib.h>
	#include "lista.h"
	
	int main() {
		
		ListaEncadeada * lista = create();
	 	
		printListaEncadeada(lista);
		add(lista, 10);
		
		printListaEncadeada(lista);
		size(lista);
	
		add(lista, 20);
		
		printListaEncadeada(lista);
		size(lista);
		
		add(lista, 30);
		add(lista, 40);
		add(lista, 50);
		add(lista, 60);
		
		printListaEncadeada(lista);
		size(lista);
		
		remover(lista, 10);
		remover(lista, 25);
	
		printListaEncadeada(lista);
		size(lista);
		
		printf("Retorna -1 se o elemento nao for encontrado e se for encontrado retorna ele mesmo : %d\n", find(lista, 50));
		
		printf("Retorna 1 se a lista esta vazia e 0 caso contrario : %i \n", isEmpty(lista));
		
		
		
		 clear(lista);
		printListaEncadeada(lista);

		
		
		
		return 0;
	}
