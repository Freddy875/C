//Hacer que el programa borre la pantalla al pulsar 1

#include <stdio.h>
#include <stdlib.h>
int main(){

	char cTecla[1];
	
	printf("Programa para borrar la batalla");
	
	printf("\n---------------------------\n");
	
	printf("\n---------------------------\n");
	
	printf("\n---------------------------\n");
	
	printf("\n---------------------------\n");
	
	printf("\n---------------------------\n");
	
	printf("\nPara borrar la pantalla ingresa 1");

	printf("\nIngresa una tecla cualquiera: ");

	
	gets(cTecla);
	
	if(strcmp(cTecla,"1") == 0){
		
		system("cls");
		
		printf("\nSe ha limpiado la pantalla ");
		
	}else{
		
		fflush(stdin);
		
		printf("\nNo se ha limpiado la pantalla");
		
		printf("\nPara borrar la pantalla ingresa 1");

		printf("\nIngresa una tecla cualquiera: ");
		
		gets(cTecla);
		
		if(strcmp(cTecla,"1") == 0){
			
			system("cls");
		
			printf("\nSe ha limpiado la pantalla ");
			
		}else{
			
			printf("\nNo se ha limpiado la pantalla");
			
		}
		
	}//fin del if-else
	
	return 0;
	
}//fin int main
