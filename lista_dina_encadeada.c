#include <stdlib.h>
#include <stdio.h>
#include "lista_dina_encadeada.h"

struct elemento{
	struct ED_LE dados;
	struct elemento *prox;
};

typedef struct elemento Elem;

Lista *cria_lista(){

	Lista *li = (Lista*)malloc(sizeof(Lista));
	if(li != NULL)
		*li=NULL;
	return li;
}

void libera_lista(Lista *li){
	if(li != NULL){
		Elem *no;
		while((*li) != NULL){
			no = *li;
			*li = (*li)->prox;
			free(no);
		}
		free(li);
	}
}
