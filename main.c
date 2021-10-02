#include <stdio.h>
#include <stdlib.h>
#include "math.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int NumToTras;
	int Ndigit;
	int div = 1;
	int i = 0;
	int c = 0;
	int s = 0;
	int rest = 0;
	int Digitarray[1000];
	int a;
	
	printf("Che Tipo di conversione vuoi effettuare: ");
	printf("\n-1 Decimale Binaria.\n-2 Binaria Decimale\n-3 Esadecimale Decimale\n");
	scanf("%d", &a);
	if(a == 0)
	{
		scanf ("%*[^\ n ]");
		printf (" Attenzione : input non valido .\ n ");
	}
	scanf("%d", &NumToTras);
	
	switch(a)
	{
		case 1:
		printf("Inserisci il numero da convertire: ");
		scanf("%d", &NumToTras);
			
			do{
				rest = NumToTras;
				rest = rest%2;		
				Digitarray[i] = rest;
				printf("%d", Digitarray[i]);
				NumToTras = NumToTras/2;							
				i++;								
			}while(NumToTras != 0);
				
			printf("\n%d", i);
						
			for(c = i - 1; c >= 0; c--)	
			{
				printf(" %d ", Digitarray[c]);
			}
			break;		
			/*
			for(i = 0; NumToTras > 0; i++)
			{				
			 	Digitarray[i] = NumToTras%10;
				NumToTras = NumToTras/10;								
			}	
			*/
	}		
	return 0;
}
