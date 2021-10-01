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
	int Digitarray[s];	
	
	printf("Inserisci il numero da convertire: ");
	scanf("%d", &NumToTras);
		
		while(NumToTras != 0)
		{
			rest = NumToTras;
			rest = rest%2;			
			Digitarray[i] = rest;
			printf("\n%d", Digitarray[i]);
			NumToTras = NumToTras/2;				
			i++;								
		}
		
			
		printf("\n%d", i);
		for(c = i - 1; c >= 0; c--)	
		{
			printf(" %d ", Digitarray[c]);
		}	
			
				
		/*
		for(i = 0; NumToTras > 0; i++)
		{				
		 	Digitarray[i] = NumToTras%10;
			NumToTras = NumToTras/10;								
		}	
		*/
			
	return 0;
}
