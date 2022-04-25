#include "tipo.h"

void deletarAnotacao (tipoListaAnotacao *p)
{
	tipoAnotacao tituloBusca;
	bool encontrou = false;
	
	printf("\nDigite o titulo para excluir a anotacao: ");
	fflush(stdin);
	gets(tituloBusca.titulo);
	
	int indice;
	for (indice=0; indice<p->tamanhoListaAnotacao;indice++)
	{
		if(strcmp(tituloBusca.titulo, p->dadosAnotacao[indice].titulo)==0)
		{
			encontrou = true;
			break;
		}
	}
	if(encontrou == true)
	{
		int i;
		for (i=indice;i<p->tamanhoListaAnotacao;i++)
		{
			p->dadosAnotacao[i] = p->dadosAnotacao[i+1];
		}
		p->tamanhoListaAnotacao--;
		printf("\nAnotacao excluida!!\n");
	}
	else
	{
		printf("\nAnotacao nao encontrada ou ja excluida!!\n");
	}
	
}
