#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "");
	system("color f1");
	int gene;
	int des=1;
	while(des==1){
		printf("Las computadoras han evolucionado a lo largo del tiempo en diferentes generaciones,	\ncada una marcada por avances tecnológicos significativos. \n ¿Sobre que generación te gustaría aprender?\n");
		scanf("%d",&gene);
		
		switch(gene){
			case 1:
				printf("Primera Generación (1940-1956): \n -Uso de tubos de vacío para procesamiento. \n -Tamaño grande y alto consumo de energía. \n -Programación manual y cableado para instrucciones.\n");
				break;
			case 2:
				printf("Segunda Generación (1956-1963): \n -Adopción de transistores para procesamiento. \n -Reducción significativa del tamaño y consumo de energía. \n -Uso de cintas magnéticas y discos magnéticos para almacenamiento.\n");
				break;
			case 3:
				printf("Tercera Generación (1964-1971): \n -Introducción de circuitos integrados (chips) para mayor densidad de componentes. \n -Desarrollo de lenguajes de programación de alto nivel como COBOL y FORTRAN. \n -Mayor velocidad y eficiencia en comparación con generaciones anteriores. \n");
				break;
			case 4:
				printf("Cuarta Generación (1971-1980): \n -Invención del microprocesador, permitiendo computadoras personales (PCs). \n -Mayor poder de procesamiento y capacidad de memoria. \n -Desarrollo de sistemas operativos como UNIX y MS-DOS. \n");
				break;
			case 5:
				printf("Quinta Generación (1980-Presente): \n -Avances en circuitos integrados en gran escala (LSI) y muy grande escala (VLSI). \n -Mayor capacidad de procesamiento y almacenamiento. \n -Uso generalizado de interfaces gráficas y redes de comunicación.\n");
				break;
			default:
				printf("Valor invalido.(1 al 5)\n");
				break;
		}
		printf("\n¿Quieres aprender sobre cada generación?(1 si, 0 no)\n");
		scanf("%d",&des);
	}
	return 0;
}
