#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int NumToTras;
	int Ndigit;
	float Digit;
	int div = 1;
	
	printf("Inserisci il numero da convertire: ");
	scanf("%d", &NumToTras);
	
	while(NumToTras>0)
	{	
		NumToTras = NumToTras/10;
	}
	
	printf("%1.0f",Digit);
	
	return 0;
}
