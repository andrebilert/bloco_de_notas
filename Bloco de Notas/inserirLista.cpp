#include "tipo.h"

void inserirLista (tipoListaAnotacao *p)
{
	tipoAnotacao novaAnotacao;
	int i;
	int indice;
	
	printf("\nDigite o titulo: ");
	fflush(stdin);
	gets(novaAnotacao.titulo);
	printf("\nDigite o texto: ");
	fflush(stdin);
	gets(novaAnotacao.texto);
	
	if (p->tamanhoListaAnotacao < 10)
	{		
		if(p->tamanhoListaAnotacao == 0)
		{
			p->dadosAnotacao[0] = novaAnotacao;
		}
		else
		{
			for(indice=0; indice<p->tamanhoListaAnotacao;indice++)
			{
				if(strcmp(p->dadosAnotacao[indice].titulo,novaAnotacao.titulo)>0)
				{
					break;
				}
			}	
			for(i = p->tamanhoListaAnotacao;i > indice;i--)
			{
				p->dadosAnotacao[i] = p->dadosAnotacao[i-1];
			}
			p->dadosAnotacao[indice] = novaAnotacao;
		}
		
		p->tamanhoListaAnotacao++;
	}
	else
	{
		printf("\nLista Cheia!!");
	} 
}
