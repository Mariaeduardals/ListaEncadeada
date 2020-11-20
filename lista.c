	#include <stdio.h>
	#include <stdlib.h>
	#include "lista.h"
	
	ListaEncadeada *create() {
	
		 ListaEncadeada *lista = (ListaEncadeada *)malloc(sizeof (ListaEncadeada));//1  //1
				///complexidade espacial -> O (2) = O(c). constante. 
		
		 if(lista != NULL) {//1
			 lista->inicio = NULL; //1
			 lista->fim = NULL; //1
			 lista->tamanho = 0; //1
		 }
	
		 return lista; //1
		 	//complexidade temporal -> O(5) = O(c). constante.
	}
	
	int add(ListaEncadeada *lista, int valor) { //2
		 
		No* pnovo = (No*) malloc(sizeof(No)); //1
		
		///complexidade espacial -> O (3) = O(c). constante. 
	
		if(pnovo != NULL) { //1
				 pnovo->valor = valor; //1
				 pnovo->proximo = NULL; //1
	
				 if(lista->inicio == NULL) { //1
					lista->inicio = pnovo; //1
				 } else {  
					lista->fim->proximo = pnovo; //1
				 }
	
				 lista->fim = pnovo; //1
				 lista->tamanho++; //1
				 return 1; //1
		 }
		 
		 return 0; //1
		 
		 ///complexidade temporal -> O (9) = O(c). constante.
	}
	
	int remover(ListaEncadeada *lista, int e){ //2
		
		///complexidade espacial -> O (4) = O(c). constante.
		
		 if (!isEmpty(lista)) { //1
			 No *alvo = lista->inicio; //1 //1
			 No *anterior; //1
			 while(alvo != NULL && alvo->valor != e) { //1
				anterior = alvo; //1 
				alvo = alvo->proximo; //1
			 }
			 if(alvo != NULL) { //n
				 if(alvo != lista->inicio) { //1
					anterior->proximo = alvo->proximo; //1
				 } else {
					lista->inicio = alvo->proximo; //1
				 }
	
				 if(alvo == lista->fim) { //1
					lista->fim = anterior; //1
				 }
	
				 lista->tamanho--; //1
				 freeNo(alvo); //1
				 return 1;//1	 
			 }
		 }
		 return 0; //1
		 
		 //complexidade temporal -> O (15 + n) = O(n). linear.
	}
	
	int isEmpty(ListaEncadeada* lista){ //1
	    ///complexidade espacial -> O (1) = O(c). constante.
		if (lista->tamanho == 0){//1
				return 1; //1
		} 
		return 0; //1
		//complexidade temporal -> O (3) = O(c). constante.
		
	}
	
	
	int find (ListaEncadeada* lista, int x){ //2
		
		///complexidade espacial -> O (4) = O(c). constante.
		
	  int aux = 0; //1
	  No* alvo; //1
	  alvo = lista->inicio; //1
	   
	  while (alvo != NULL){ //n
	  	
	     if (alvo->valor == x) //1
				return(aux);   //1    
	                            
	    	 else alvo = alvo->proximo; //1
	    	 aux++; //1
	  }
	  
	  return -1; //1
		
		//complexidade temporal -> O (7 + n) = O(n). linear.
		
	}
	
	int size(ListaEncadeada* lista){ //1
	///complexidade espacial -> O (1) = O(c). constante.
		printf("\nTamanho da lista ->  %i \n\n", lista->tamanho); //1
		//complexidade temporal -> O (1) = O(c). constante.
	}
	
	
	void printListaEncadeada(ListaEncadeada* lista){ //1
			 
			 ///complexidade espacial -> O (2) = O(c). constante.
			 
			 printf("\n----------Elementos da Lista -------------\n\n"); //1
			 
			 if(isEmpty(lista)) //1
			 	printf("Lista vazia.\n"); //1
			 else{
			 	No *alvo = lista->inicio; //1 //1
			 
				 while(alvo != NULL){ //n
				 	printNo(alvo); //1
					alvo = alvo->proximo; //1
				 }	
			 }
			
			//complexidade temporal -> O (7 +  n) = O(n). lienar.
			
	}
	
	void clear(ListaEncadeada* lista){//1
	///complexidade espacial -> O (2) = O(c). constante.
	
			No* aux = lista->inicio;
			
			printf("\nRemovendo os elementos !\n");
			
			while(aux != NULL){ //n
		 	aux = lista->inicio->proximo;
			free(lista->inicio);
			lista->inicio = aux;
		
			}
			lista->tamanho = 0;
			free(aux);
			free(lista);
		
		}
		
		//complexidade temporal -> O (7 + n) = O(n). linear.
	
	
	
	
	
	
	

