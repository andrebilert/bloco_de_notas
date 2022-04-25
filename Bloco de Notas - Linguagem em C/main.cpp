#include "tipo.h"

int main (){
	int opcao;
	tipoListaAnotacao listaAnotacao;
	inicializarLista(&listaAnotacao);
	
	do{
		printf("\n1 - Insira uma anotacao");
		printf("\n2 - Apresentar anotacao");
		printf("\n3 - Pesquisar anotacao");
		printf("\n4 - Excluir anotacao");
		printf("\n5 - Apresentar anotacao decrescente");
		printf("\n6 - Deletar anotacao");
		printf("\n0 - Sair\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d",&opcao);
		switch(opcao){
			case 1: inserirLista (&listaAnotacao); break;
			case 2: apresentarAnotacao(&listaAnotacao); break;
			case 3: pesquisarAnotacao(&listaAnotacao); break;
			case 4: deletarAnotacao(&listaAnotacao); break;
			case 5: apresentarAnotacaoDecrescente(&listaAnotacao); break;
			case 6: deletarAnotacao (&listaAnotacao); break;
		}
	}while(opcao!=0);
}


