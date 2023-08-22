#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "");
system("color f1");
float c,f,k;
int d,T;
printf("¿Desea realizar una conversión de temperatura? (1 si,0 no)\n");
scanf("%d",&d);
	
	while(d==1){
		printf("Conversiones disponibles:\n C-->F(1),C-->K(2)\n F-->C(3),F-->K(4)\n K-->C(5),K-->F(6)\n");
		scanf("%d",&T);
		
		switch(T){
			case 1:
				printf("Ingresa la temperatura en Celsius para convertirla a Fahrenheit \n");
				scanf("%f",&c);
				f=(c*9/5)+32;
				printf("La temperatura en Fahrenheit es de %f\n",f);
				break;
			case 2:
				printf("Ingresa la temperatura en Celsius para convertirla a Kelvin \n");
				scanf("%f",&c);
				k=c+273.15;
				printf("La temperatura en Kelvin es de %f\n",k);
				break;
			case 3:
				printf("Ingresa la temperatura en Fahrenheit para convertirla a Celsius \n");
				scanf("%f",&f);
				c=(f-32)*5/9;
				printf("La temperatura en Celsius es de %f\n",c);
				break;
			case 4:
				printf("Ingresa la temperatura en Fahrenheit para convertirla a Kelvin \n");
				scanf("%f",&f);
				k=((f-32)*5/9)+273.15;
				printf("La temperatura en Kelvin es de %f\n",k);
				break;
			case 5:
				printf("Ingresa la temperatura en Kelvin para convertirla a Celsius \n");
				scanf("%f",&k);
				c=k-273.15;
				printf("La temperatura en Celsius es de %f\n",c);
				break;
			case 6:
				printf("Ingresa la temperatura en Kelvin para convertirla a Fahrenheit \n");
				scanf("%f",&k);
				f=((k-273.15)*9/5)+32;
				printf("La temperatura en Fahrenheit es de %f\n",c);
				break;
			default:
				printf("Valor invalido\n");
				break;
		}
		printf("¿Quieres continuar? (1 si,0 no)\n");
		scanf("%d",&d);
	}
}
