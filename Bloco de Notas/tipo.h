#ifndef _tipo_
#define _tipo_

#include <conio.h>
#include <stdio.h>
#include <string.h>

typedef struct tipoAnotacao{
	char titulo[40];
	char texto[200];
}tipoAnotacao;

typedef struct tipoListaAnotacao{
	int tamanhoListaAnotacao;
	tipoAnotacao dadosAnotacao[10];
}tipoListaAnotacao;

void apresentarAnotacao (tipoListaAnotacao *p);
void apresentarAnotacaoDecrescente (tipoListaAnotacao *p);
void deletarAnotacao (tipoListaAnotacao *p);
void inicializarLista (tipoListaAnotacao *p);
void inserirLista (tipoListaAnotacao *p);
void pesquisarAnotacao (tipoListaAnotacao *p);


#endif
