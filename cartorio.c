#include <stdio.h> //biblioteca de comica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h>// biblioteca respons�vel por cuidar das strings


int registro() // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: \n");
	scanf("%s", &cpf);
	
	strcpy(arquivo, cpf); // responsavel por copiar os valores das strings
	
	FILE *file; // cria o arquivo
	
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file, cpf); // salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: \n");
	scanf("%s", &nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: \n");
	scanf("%s", &sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: \n");
	scanf("%s", &cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	
	setlocale(LC_ALL, "Portuguese");
	char cpf [40];
	char conteudo[200];
	 
	printf("Digite o cpf a ser consultado: \n");
	scanf("%s", cpf);
	printf("\n");
	 
	FILE *file;
	file = fopen(cpf, "r");
	 
	if(file == NULL)
	{
		printf("N�o foi poss�vel achar o arquivo. N�o localizado. \n");
	}
	
	while(fgets(conteudo, 200, file)!= NULL)
	{
		printf("Essas S�o as informa��es do usu�rio: \n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	fclose(file);
	system("pause");
	 
	 
}

int deletar()
{
	printf("Voc� escolheu a op��o de deletar um cadastro.\n\n");
	system("pause");
}

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
		printf("Op��o: "); // Fim do menu
		
		scanf("%d", &opcao); // Armazenando a escolha do usu�rio
		
		system("cls");
		
		switch(opcao)
		{
			case 1:
				registro();
			break;
			
			case 2:
				consulta();
			break;	
			
			case 3:
				deletar();
			break;
			
			default:
				printf("Essa op��o n�o esta dispon�vel!\n\n");
				getch();
			break;	
				
		}
		
		
	}
	
}
