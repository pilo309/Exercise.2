#include <stdio.h>
#include <conio.h>

//Exercise 2.4
//Tilføj en while - loop i dit program fra Exercise 2.3 således, at indtastning af de to
//modstandsværdier og beregning af erstatningsmodstand og udskrivning af denne
//gentages for altid(programmet stopper aldrig, men kan selvfølgelig stoppes ved at
//lukke konsolvinduet – hint 2D).

int main(void)
{
	
	
	
	while (1)
	{
		double modstand1;
		double modstand2;								//initialiserer variable
		double ermodstand;


		printf_s("\nIndtast parallel modstand 1 i ohm\n");
		scanf_s("%lf", &modstand1);
		//anmoder bruger om indtastning
		printf_s("\nIndtast parallel modstand 2 i ohm\n");
		scanf_s("%lf", &modstand2);

		ermodstand = 1 / ((1 / modstand1) + (1 / modstand2));		//formel for erstatningsmodstanden

		printf_s("\nErstatningsmodstanden vil ergo vaere lig %lf\n", ermodstand); //spytte ermodstand ud

	}


	return 0;
}