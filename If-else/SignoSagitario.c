/*Ingresar desde el teclado el numbre de la persona 
y el signo Zodiacal de la persona 
Si la persona es signo Sagitario entonces imprimir 
*/
#include <stdio.h>
int main(){
	
	char cNombre[20],cSignoZodiacal[20];
	
	printf("Ingresa su nombre: ");
	
	gets(cNombre);
	
	printf("\nIngresa si signo Zodical: ");
	
	gets(cSignoZodiacal);
	
	if(strcmp(cSignoZodiacal,"Sagitario") == 0  ){
		
		printf("\nTu nombre es: %s",cNombre);
		
		printf("\nY somos del mismo Signo Zodicacal: %s",cSignoZodiacal);
		
	}else if(strcmp(cSignoZodiacal,"sagitario") == 0 ){
	
		printf("\nTu nombre es: %s",cNombre);
		
		printf("\nY somos del mismo Signo Zodicacal: %s",cSignoZodiacal);
	
	}else{
		
		printf("\nTu nombre es: %s",cNombre);
		
		printf("\nY NO somos del mismo Signo Zodicacal: %s",cSignoZodiacal);
		
	}//fin if-else
	
	return 0;
	
}//fin int main
