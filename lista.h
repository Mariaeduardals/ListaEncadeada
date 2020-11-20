	#include <stdio.h>
	#include <stdlib.h>
	#include "no.h"
	 
	typedef struct {
		 No *inicio;
		 No *fim;
		 int tamanho;
	} ListaEncadeada;
	
	ListaEncadeada* create();
	
	int add(ListaEncadeada* lista, int valor);
	
	int remover(ListaEncadeada *lista, int e);
	
	int isEmpty(ListaEncadeada* lista);
	
	int find (ListaEncadeada* lista, int x);
	
	int size(ListaEncadeada* lista);
	
	void printListaEncadeada(ListaEncadeada* lista);
	
	void clear(ListaEncadeada* lista);
