#include <stdio.h> //biblioteca de comicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h>// biblioteca responsável por cuidar das strings


int registro() // Função responsável por cadastrar os usuários no sistema
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
		printf("Não foi possível achar o arquivo. Não localizado. \n");
	}
	
	while(fgets(conteudo, 200, file)!= NULL)
	{
		printf("Essas São as informações do usuário: \n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	fclose(file);
	system("pause");
	 
	 
}

int deletar()
{
	printf("Você escolheu a opção de deletar um cadastro.\n\n");
	system("pause");
}

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
		printf("Opção: "); // Fim do menu
		
		scanf("%d", &opcao); // Armazenando a escolha do usuário
		
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
				printf("Essa opção não esta disponível!\n\n");
				getch();
			break;	
				
		}
		
		
	}
	
}
