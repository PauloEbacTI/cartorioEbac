#include <stdio.h> //biblioteca de comica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h>// biblioteca respons�vel por cuidar das strings


int main()
{
	int opcao = 0; // Definindo as vari�veis
	int laco = 1;
	
	for(laco = 1; laco = 1;)
	{
		
		system("cls");
		setlocale(LC_ALL, "Portuguese"); // Definindo as linguagens
		
		printf("### Cart�rio da EBAC ###\n\n"); // Ini�cio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1- Registrar nomes.\n");
		printf("\t2- Consultar nomes.\n");
		printf("\t3- Deletar nomes.\n");
		printf("\t4- Sair do sistema.\n\n");
		printf("Op��o: "); // Fim do menu
		
		scanf("%d", &opcao); // Armazenando a escolha do usu�rio
		
		system("cls");
		
		switch(opcao)
		{
			case 1:
			printf("- Voc� escolheu registrar alunos.\n");
			system("pause");
			break;
			
			case 2:
			printf("- Voc� escolheu consultar os alunos.\n");
			system("pause");
			break;	
			
			case 3:
			printf("- Voc� escolheu deletar um cadastro.\n");
			system("pause");
			break;
							
			default:
			printf("Essa op��o n�o esta dispon�vel!\n\n");
			system("pause");
			break;	
				
		}
		
		
	}
	
}
