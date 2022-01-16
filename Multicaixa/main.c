#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Variaveis Globais
int codigo=112019;
int contador,opcao;

int VerificarCodigo(int pin){
	contador=2;
	
		printf("\t\t===============================\n");
		printf("\t\t\tMULTICAIXA\n");
		printf("\t\t==============================\n\t\t");
		printf("\n\n\n");
	
	while(pin!=codigo){
		
		Limpatela();
		system("Color 4");
		printf("\n\t\tCODIGO ERRADO!\n\n\t\tDIGITA NOVAMENTE TEU CODIGO PESSOAL\n");
		printf("\t\t"); 
		scanf("%d",&pin);	
			
			
	
		if(contador==0){
			Limpatela();
			system("Color 7");	
			printf("\n\t\tAS SUAS TENTATIVAS TERMINARAM\n");
			break;
		}
		
		contador=contador-1;
		
	}	
	
	
	Limpatela();
	menu();
}

menu(){
	system("Color 7");	
	printf("\n\n");
	printf("\t\t===============================\n");
	printf("\t\t\tMULTICAIXA\n");
	printf("\t\t==============================\n\t\t");
	printf("\n\n");
	printf("\t1 - CONSULTAS               4- ALTERAR CODIGO PESSOAL\n");
	printf("\t2 - RECARGAS TELEFONICAS    5- TRANSFERENCIA\n");
	printf("\t3 - PAGAMENTOS              6- SAIR\n");
	printf("\n\t\t");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			Consulta();
			break;
		case 2:
			Recarga();
			break;
		case 3:
			Pagamento();
			break;
		case 4:
			Alterar();
			break;
		case 5:
			Transferir();
			break;
		case 6:
			Sair();
			break;
		default:
			printf("OPCAO INEXISTENTE\n");		
	}
}


submenu(){
	printf("\t1 - OUTRA OPERACAO               2- SAIR\n");
				printf("\n\t\t");
				scanf("%d",&opcao);
				
				switch(opcao){
					
					case 1:
						Limpatela();
						menu();
						break;
					case 2:
							Limpatela();
							printf("SAINDO...\n");
						break;
					default:
						system("EXIT");		
				}
}

Consulta(){
	
	
	Limpatela();
	printf("\n\n");
	printf("\t\t===============================\n");
	printf("\t\t\tCONSULTA\n");
	printf("\t\t==============================\n\t\t");
	printf("\n\n");
	printf("\t1 - SALDO DA CONTA               2- IBAN\n");
	printf("\n\t\t");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
				Limpatela();
				printf("\n\n");
				printf("\t\t===============================\n");
				printf("\t\t\tSALDO DA CONTA\n");
				printf("\t\t==============================\n\t\t");
				printf("\n\n");
				printf("O SALDO DA CONTA:\n");
				printf("\n\n");
				submenu();
			
			break;
			
			case 2:
					Limpatela();
				printf("\n\n");
				printf("\t\t===============================\n");
				printf("\t\t\tIBAN\n");
				printf("\t\t==============================\n\n\t\t");
			
				
				printf("\tIBAN: AO00");
				RandNumeros();	
					
				printf("\n\n");
				
				submenu();
			break;
	}
}

Recarga(){
	
	Limpatela();
	printf("\n\n");
	printf("\t\t===============================\n");
	printf("\t\t\tRECARGA TELEFONICA\n");
	printf("\t\t==============================\n\t\t");
	printf("\n\n");
	printf("\t1 -  UNITEL              2- MOVICEL\n");
	printf("\n\t\t");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			Limpatela();
			printf("\tCODIGO DA REGARGA:");
			printf("\t\t");
	
			srand(time(NULL));
			for(contador=0;contador<12;contador++){
				printf("%d ",rand() % 9);	
			}						
			
			printf("\n\n");
			submenu();
			break;
		case 2:
			Limpatela();
			printf("\tCODIGO DA REGARGA: ");
			printf("\t\t");
		
			srand(time(NULL));
			for(contador=0;contador<12;contador++){
				printf("%d ",rand() % 9);	
			}
			
			printf("\n\n");
			submenu();
			break;
		default:
			printf("OPERACAO INTERROPIDA\n");
	}
}

Pagamento(){
	
	Limpatela();
	printf("\n\n");
	printf("\t\t===============================\n");
	printf("\t\t\tPAGAMENTO\n");
	printf("\t\t==============================\n\t\t");
	printf("\n\n");
	printf("\t1 -  TELEVISAO              2- SERVICOS\n");
	printf("\n\t\t");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			Limpatela();
		
		printf("\n\n");
		printf("\t\t===============================\n");
		printf("\t\t\tPAGAMENTO DE TELEVISAO\n");
		printf("\t\t==============================\n\t\t");
		printf("\n\n");
		printf("\t1 -  ZAP             2- DSTV\n");
		printf("\n\t\t");
		scanf("%d",&opcao);
		
		switch(opcao){
			
			case 1:
				
				Limpatela();
				printf("\n\n");
				printf("\t\t===================================\n");
				printf("\t\tCODIGO DA ZAPADINHA\n");
				printf("\t\t===================================\n\t\t");
				printf("\n\n");
		
					printf("\t\t");
				srand(time(NULL));
				for(contador=0;contador<12;contador++){
					printf("%d ",rand() % 9);	
				}						
				
				printf("\n\n");
				submenu();
				break;
			
			case 2:
				
					Limpatela();
				printf("\n\n");
				printf("\t\t===============================\n");
				printf("\t\t\tCODIGO DA RECARGA DSTV\n");
				printf("\t\t==============================\n\t\t");
				printf("\n\n");
			
							printf("\t\t");
					srand(time(NULL));
					for(contador=0;contador<12;contador++){
						printf("%d ",rand() % 9);	
					}						
					
						printf("\n\n");
					submenu();
				break;
				
			default:
				printf("OPERACAO TERMINADA\n\n");
		}
			
			break;
		case 2:
			Limpatela();
			printf("\tCODIGO DA REGARGA: ");
			printf("\t\t");
		
			srand(time(NULL));
			for(contador=0;contador<12;contador++){
				printf("%d ",rand() % 9);	
			}
			
			printf("\n\n");
			submenu();
			break;
		default:
			printf("OPERACAO INTERROPIDA\n");
	}
		
}

Alterar(){
}

Transferir(){
}

 Sair(){
	
}

RandNumeros(){
	srand(time(NULL));						
	printf("%d",rand() % 100000000000);
}
Limpatela(){
	system("cls");
}
int main(int argc, char *argv[]) {
	
	int pin;
	
	printf("\t\t===============================\n");
	printf("\t\t\tMULTICAIXA\n");
	printf("\t\t==============================\n\t\t");
	printf("\n\n\n");
	printf("\t\tDIGITE O TEU CODIGO PESSOAL\n");
	printf("\t\t");
	scanf("%d",&pin);
	VerificarCodigo(pin);
	
	getchar();
}
