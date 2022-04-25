#include "tipo.h"

void pesquisarAnotacao (tipoListaAnotacao *p)
{
	int i;
	int busca = -1;
	tipoAnotacao tituloBusca;
	
	printf("\nDigite o titulo para buscar: ");
	fflush(stdin);
	gets(tituloBusca.titulo);
	
	for(i=0; i<p->tamanhoListaAnotacao;i++)
	{
		if(strcmp(p->dadosAnotacao[i].titulo,tituloBusca.titulo)==0)
		{
			busca = i;
		}
	}
	if(busca == -1)
	{
		printf("\nNao encontrado!!\n");	
	}
	else
	{
		printf("\nTitulo: %s",p->dadosAnotacao[busca].titulo);
		printf("\nTexto: %s",p->dadosAnotacao[busca].texto);
		printf("\n---------------------------\n");
	}

}
