#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

    	struct dados {
    		char nome[60];
    		int matr;
    		float nota;
    	};
    	struct dados aluno[3];

void copiar (char nomecop, char nome)
	{
		char i;
		for (i=0; i<3; i++)
			{
				nomecop[i] = nome[i];
			}
	}

    	int main()
    		{
    			setlocale(LC_ALL,"Portuguese");

    			int i=0, j=0;
    			char esc;
    			char nome[3][60], nomecop[3][60];

    			for(i=0; i<80; i++)
    				{
    					printf("#");
    				}
    		do
    		{
    			printf("#                                                                              #");
    			printf("# Sistema escolar                                                              #");
    			printf("#------------------------------------------------------------------------------#");
    			printf("# Centro Federal de Educação Tecnológica Celso Suckow da Fonseca     2015      #");
    			printf("#------------------------------------------------------------------------------#");
    			printf("#                                   	    Data: %s - Hora: %s #",__DATE__,__TIME__);
    			printf("#------------------------------------------------------------------------------#");
    			printf("#                                                                              #");
    			printf("# Menu de escolhas:                                                            #");
    			printf("# 1 - Registrador de alunos                                                    #");
    			printf("# 2 - Registrador de notas                                                     #");
    			printf("# 3 - Mostrar alunos aprovados                                                 #");
    			printf("# 4 - Mostrar alunos reprovados                                                #");
    			printf("#                                                                              #");
    			printf("# Selecione uma opção: ");
    			scanf("%d", &esc);
    			system("cls");
    			switch(esc) {
    					case 1: printf("\nRegistrador de alunos\n");
    					printf("Informe o nome dos alunos:\n");
    					for (i=0; i<3; i++) {
    							fflush(stdin);
    							printf("Aluno %d: ", i+1);
    							fgets(aluno[i].nome,60,stdin);
    							
    							if (aluno[i].nome[i] < 'A')
    								{
    									printf("O nome %s contém um número, repita!\n\n", aluno[i].nome);
									}
    						
    							printf("Matrícula: ");
    							scanf("%d", &aluno[i].matr);
    							aluno[i].nome[strlen(aluno[i].nome)-1] = '\0';
    						}
                  			system("cls");
                  			printf("\n");
                  			for(i=0;i<3;i++) {
    								printf(" Nome: %s | Matrícula: %d\n\n", aluno[i].nome, aluno[i].matr);
    							}
    							break;
    					
    					case 2: printf("\n Registrador de notas\n");
    					printf("Informe o nome do aluno:");
    					fgets(aluno[i].nome,60,stdin);
    					for (i=0; i<3; i++)
    						{
    							for (j=0; j<60; j++)
    								{
    									if (aluno[i].nome[i][j] == nomecop[i][j])
    										{
    											printf("Insira a nota %d: ", i+1);
    											scanf("%f", aluno[i].nota);
											}
									}
							}
							break; 

    						default:
    							printf("Opção inválida");
    			}
    			break;
    		} while	(getch() != 5);
    			system("pause");
    		system("pause");
    		return 0;
    }
