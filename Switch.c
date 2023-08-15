#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "");
	system("color f1");
	int gene;
	int des=1;
	while(des==1){
		printf("Las computadoras han evolucionado a lo largo del tiempo en diferentes generaciones,	\ncada una marcada por avances tecnol�gicos significativos. \n �Sobre que generaci�n te gustar�a aprender?\n");
		scanf("%d",&gene);
		
		switch(gene){
			case 1:
				printf("Primera Generaci�n (1940-1956): \n -Uso de tubos de vac�o para procesamiento. \n -Tama�o grande y alto consumo de energ�a. \n -Programaci�n manual y cableado para instrucciones.\n");
				break;
			case 2:
				printf("Segunda Generaci�n (1956-1963): \n -Adopci�n de transistores para procesamiento. \n -Reducci�n significativa del tama�o y consumo de energ�a. \n -Uso de cintas magn�ticas y discos magn�ticos para almacenamiento.\n");
				break;
			case 3:
				printf("Tercera Generaci�n (1964-1971): \n -Introducci�n de circuitos integrados (chips) para mayor densidad de componentes. \n -Desarrollo de lenguajes de programaci�n de alto nivel como COBOL y FORTRAN. \n -Mayor velocidad y eficiencia en comparaci�n con generaciones anteriores. \n");
				break;
			case 4:
				printf("Cuarta Generaci�n (1971-1980): \n -Invenci�n del microprocesador, permitiendo computadoras personales (PCs). \n -Mayor poder de procesamiento y capacidad de memoria. \n -Desarrollo de sistemas operativos como UNIX y MS-DOS. \n");
				break;
			case 5:
				printf("Quinta Generaci�n (1980-Presente): \n -Avances en circuitos integrados en gran escala (LSI) y muy grande escala (VLSI). \n -Mayor capacidad de procesamiento y almacenamiento. \n -Uso generalizado de interfaces gr�ficas y redes de comunicaci�n.\n");
				break;
			default:
				printf("Valor invalido.(1 al 5)\n");
				break;
		}
		printf("\n�Quieres aprender sobre cada generaci�n?(1 si, 0 no)\n");
		scanf("%d",&des);
	}
	return 0;
}
