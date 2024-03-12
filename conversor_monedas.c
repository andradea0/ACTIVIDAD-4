#include <stdio.h> 
int main() {     
	float cantidad;     
	int opcion;      
	
	printf("Ingrese la cantidad a convertir: ");     
	scanf("%f", &cantidad);      
	
	printf("Tipo de cambio:\n");     
	printf("1. Quetzales a Dólares\n");     
	printf("2. Dólares a Quetzales\n");     
	printf("3. Dólares a Euros\n");     
	printf("4. Euros a Dólares\n");     
	scanf("%d", &opcion);      
	
	switch(opcion) {         
		case 1:             
			printf("%.2f quetzales son %.2f dólares.\n", cantidad, cantidad * 0.13);    
			break;         
		case 2:             
			printf("%.2f dólares son %.2f quetzales.\n", cantidad, cantidad / 0.13);             
			break;         
		case 3:             
			printf("%.2f dólares son %.2f euros.\n", cantidad, cantidad * 0.83);             
			break;         
		case 4:             
			printf("%.2f euros son %.2f dólares.\n", cantidad, cantidad / 0.83);            
 			break;         
		default:             
			printf("Opción inválida.\n");             
			break;     
	}      
	
	return 0; 
}