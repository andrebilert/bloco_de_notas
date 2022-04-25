#include "tipo.h"

void apresentarAnotacao (tipoListaAnotacao *p)
{
	if(p->tamanhoListaAnotacao < 10)
	{
		printf("\n****LISTA DE ANOTACOES****\n");
		printf("\n---------------------------\n");
		int i;
		for (i=0;i<p->tamanhoListaAnotacao;i++)
		{
			printf("Titulo: %s",p->dadosAnotacao[i].titulo);
			printf("\nTexto: %s",p->dadosAnotacao[i].texto);
			printf("\n---------------------------\n");
		}
	}
}


