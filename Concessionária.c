#include <stdio.h>
#include <string.h>
#include <locale.h>

	char user_password[10], client_name[50], contact[14], address[50], color[15], accessory[50];
	int option, car, payment, quantity;
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");

	while(1){
		
	printf("SEJA BEM-VINDO À CONCESSIONÁRIA MACQUEN!\n\nDIGITE SUA SENHA:\n");
	fflush(stdin);
	gets(user_password);

	
	if(strcmp(user_password, "123")==0){
			printf("Login efetuado com sucesso!");
			system("pause");
			system("cls");
			break;
	}	
	else{
		system("cls");
		printf("SENHA INCORRETA! TENTE NOVAMENTE.\n\n");
	}
}
	while(1){
	
	printf("OLÁ, CONSULTOR(A)! ESCOLHA UMA DAS OPÇÕES DO NOSSO MENU:\n\n");
	printf("1 - Cadastro cliente\n2 - Compra de carro\n3 - Compra de acessório\n4 – SAIR DO PROGRAMA\n\n");
	scanf("%i", &option);
	system("cls");
	
	switch(option){
		
		case 1:
		
			
			printf(" CADASTRO DE CLIENTE\n\n");

			printf(" DIGITE O NOME COMPLETO DO CLIENTE: ");
			fflush(stdin);
			fgets(client_name, 50, stdin);
			

			printf("\n DIGITE O TELEFONE DO CLIENTE [(XX)XXXX-XXXX]: ");
			fflush(stdin);
			fgets(contact, 14, stdin);

			
			printf(" \n DIGITE O ENDEREÇO DO CLIENTE: ");
			fflush(stdin);
			fgets(address, 50, stdin);
			system("cls");
			
			printf("\n DADOS CADASTRADOS:\n\n");
			printf(" NOME: %s\n", client_name);
			printf(" TELEFONE: %s\n", contact);
			printf(" ENDEREÇO: %s\n", address);
			system("pause");
			system("cls");
			break;
		
		case 2:
			
			printf(" COMPRA DE CARRO\n\n");
			printf(" ESCOLHA UM TIPO DE CARRO: \n 1 - FIAT UNO\n 2 - BRASÍLIA AMARELA\n 3 - CAMARO \n ");
			scanf("%i", &car);
			
			printf(" MARAVILHA! QUAL A COR DE PREFERÊNCIA? ");
			fflush(stdin);
			fgets(color, sizeof(color), stdin);
			
			printf("\n ESCOLHA A FORMA DE PAGAMENTO: \n 1 - DINHEIRO \n 2 - CARTÃO DE CRÉDITO \n 3 - CARTÃO DE DÉBITO \n 4 - PIX\n ");
			scanf("%i", &payment);
			system("cls");
			
			printf(" DETALHES DA COMPRA\n\n");
			printf(" CARRO: %i\n", car);
			printf(" COR: %s", color);
			printf(" FORMA DE PAGAMENTO: %i\n", payment);
			system("pause");
			system("cls");
			break;
			
		case 3:
			
			printf(" ESCOLHA DE ACESSÓRIOS\n\n");
			
			printf(" DIGITE O NOME DO ACESSÓRIO: ");
			fflush(stdin);
			fgets(accessory, sizeof(accessory), stdin);
			
			printf(" DIGITE A QUANTIDADE DE %s: ", accessory);
			scanf("%i", &quantity);
			system("cls");
			
			printf(" DETALHES DO ACESSÓRIO\n\n");
			printf(" NOME: %s\n", accessory);
			printf(" QUANTIDADE: %i\n", quantity );
		
			system("pause");
			system("cls");
			break;
			
		case 4:
			
			printf(" OBRIGADA POR ESCOLHER A CONCESSIONÁRIA MCQUEEN! VOLTE LOGO!");
			exit(0);
			}
}
}


