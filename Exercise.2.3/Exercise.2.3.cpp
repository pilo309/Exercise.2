#include <stdio.h>

//Skriv her i et program(main) som kan beregne v�rdien af en erstatningsmodstand for to parallelt
//forbundne modstande og udskrive denne v�rdi p� sk�rmen.Brugeren skal kunne
//indtaste v�rdierne af de to parallelt forbundne modstande.
//Hvilke v�rdier(resistans) kan en modstand(resistor) have ? Diskut�r med dine
//medstuderende hvilken type du skal v�lge til dine variable.
//Skriv programmet i pseudokode(gerne sammen med dine medstuderende) inden
//du begynder at skrive C kode.

//Lave program der beregner erstatningsmodstand for 2 parallele modstande

int main(void)
{

	double modstand1;
	double modstand2;								//initialiserer variable
	double ermodstand;


	printf_s("Indtast parallel modstand 1 i ohm\n");
		scanf_s("%lf", &modstand1);
															//anmoder bruger om indtastning
	printf_s("\nIndtast parallel modstand 2 i ohm\n");
		scanf_s("%lf", &modstand2);

	ermodstand = 1 / ((1 / modstand1) + (1 / modstand2));		//formel for erstatningsmodstanden

		printf_s("\nErstatningsmodstanden vil ergo vaere lig %lf\n",ermodstand); //spytte ermodstand ud

	return 0;
}
