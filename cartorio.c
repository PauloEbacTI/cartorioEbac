#include <stdio.h> //biblioteca de comicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h>// biblioteca responsável por cuidar das strings


int main()
{
	int opcao = 0; // Definindo as variáveis
	int laco = 1;
	
	for(laco = 1; laco = 1;)
	{
		
		system("cls");
		setlocale(LC_ALL, "Portuguese"); // Definindo as linguagens
		
		printf("### Cartório da EBAC ###\n\n"); // Iniício do menu
		printf("Escolha a opção desejada do menu:\n\n");
		printf("\t1- Registrar nomes.\n");
		printf("\t2- Consultar nomes.\n");
		printf("\t3- Deletar nomes.\n");
		printf("\t4- Sair do sistema.\n\n");
		printf("Opção: "); // Fim do menu
		
		scanf("%d", &opcao); // Armazenando a escolha do usuário
		
		system("cls");
		
		switch(opcao)
		{
			case 1:
			printf("- Você escolheu registrar alunos.\n");
			system("pause");
			break;
			
			case 2:
			printf("- Você escolheu consultar os alunos.\n");
			system("pause");
			break;	
			
			case 3:
			printf("- Você escolheu deletar um cadastro.\n");
			system("pause");
			break;
							
			default:
			printf("Essa opção não esta disponível!\n\n");
			system("pause");
			break;	
				
		}
		
		
	}
	
}
