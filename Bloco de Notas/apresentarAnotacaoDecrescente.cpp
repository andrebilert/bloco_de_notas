#include "tipo.h"

void apresentarAnotacaoDecrescente (tipoListaAnotacao *p)
{
	tipoListaAnotacao listaAux; //criar lista aux
	inicializarLista(&listaAux); //inicializar com 0
	tipoAnotacao novaAnotacao; //nova variavel tmp
	//nao tem if, o incrimento é no for
	for (int i = 0;i<p->tamanhoListaAnotacao;i++)
	{
		novaAnotacao = p->dadosAnotacao[i];//entrada de dados, joga a lista inserida na nova struct
		
		if (listaAux.tamanhoListaAnotacao==0)//iniciando a lista igual inserir
		{
			listaAux.dadosAnotacao[0] = novaAnotacao;	
		}
		else
		{
			int indice;
			for(indice=0; indice<listaAux.tamanhoListaAnotacao;indice++)//se for menor
			{
				if(strcmp(p->dadosAnotacao[indice].titulo, novaAnotacao.titulo)<0)
				{
					break;
				}
			}
			int i;	
			for(i = listaAux.tamanhoListaAnotacao;i > indice;i--)
			{
				listaAux.dadosAnotacao[i] = listaAux.dadosAnotacao[i-1];
			}
			listaAux.dadosAnotacao[indice] = novaAnotacao;
		}
		listaAux.tamanhoListaAnotacao++;
	}
	apresentarAnotacao(&listaAux);
}
