	 #include <stdio.h>
	 #include <stdlib.h>
	 #include "no.h"
	 
	 No* createNo(int v, No* proximo){ //2
	 	
	 	No * n = (No*) malloc(sizeof(No)); //1 //1
	 	//complexidade espacial -> O (3) = O(c). constante.
	 	
	 	n->valor = v;//1
	 	n->proximo = proximo; //1
	 	
	 	return n; //1
	 	
	 	//complexidade temporal -> O (4) = O(c). constante.
	 	
	 }
	 
	 void printNo(No* n){ //1
	 
	 //complexidade espacial -> O (1) = O(c). constante.
	 	
	 	if(n != NULL && n->proximo != NULL) //1
	 		printf("No [valor: %i, prox: %i]\n", n->valor, n->proximo->valor);//1
	 	else if(n != NULL) //1
	 		printf("No [valor: %i, prox: NULL]\n", n->valor);//1
	 	else
	 		printf("NULL\n");//1
	 		
	 		//complexidade temporal -> O (5) = O(c). constante.
	 	
	 }
	 
	 void freeNo(No* n){ // 1
	 	free(n); //1
	 	
	 	//complexidade temporal e espacial -> O (1) = O(c). constante.
	 }
