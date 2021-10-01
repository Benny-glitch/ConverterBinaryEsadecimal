#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int NumToTras;
	int Ndigit;
	int div = 1;
	int i = 0;
	int Digitarray[100];
	int s = 0;
	int ciao = 10;
	
	printf("Inserisci il numero da convertire: ");
	scanf("%d", &NumToTras);
	
		for(i = 0; NumToTras > 0; i++)
		{				
		 	Digitarray[i] = NumToTras%10;
			NumToTras = NumToTras/10;							
		}	
			
	
		printf("\n");
		printf("\n%d", Digitarray[0]);	
		printf("\n%d", Digitarray[1]);
		printf("\n%d", Digitarray[2]);
		printf("\n%d", Digitarray[3]);
		printf("\n%d", Digitarray[4]);
		printf("\n%d", Digitarray[5]);
			
	
	return 0;
}
