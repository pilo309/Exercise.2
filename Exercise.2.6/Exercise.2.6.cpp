#include <stdio.h>
#include <conio.h>

//Exercise 2.6 Erstatningsmodstand i elektrisk kredsl�b - serie
//Udvid dit program fra Exercise 2.5 s�ledes at det ogs� beregner erstatningsmodstanden, hvis de to modstande er serieforbundet og ogs� udskriver denne v�rdi p�
//sk�rmen.
//Begynd med at tilpasse din pseudokode.

int main(void)

{
	char mode2;

	printf_s("Indtast s for seriemodstand og p for parallelmodstand");
		scanf_s("%c", &mode2);

	int mode = 1;

	switch (mode2)											//lave switch hvorp� p er parallel og s serie

	{
	case 'p':

		while (mode == 1)
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

			printf_s("\nTryk 1 for at beregne igen, tryk 0 for at afslutte");
			scanf_s("%d", &mode);
		}

		break;

	case 's':

		while (mode == 1)
		{
			double modstand1;
			double modstand2;								//initialiserer variable
			double ermodstand;


			printf_s("\nIndtast serie modstand 1 i ohm\n");
			scanf_s("%lf", &modstand1);
			//anmoder bruger om indtastning
			printf_s("\nIndtast serie modstand 2 i ohm\n");
			scanf_s("%lf", &modstand2);

			ermodstand = modstand1 + modstand2;		//formel for erstatningsmodstanden

			printf_s("\nErstatningsmodstanden vil ergo vaere lig %lf\n", ermodstand); //spytte ermodstand ud

			printf_s("\nTryk 1 for at beregne igen, tryk 0 for at afslutte");
			scanf_s("%d", &mode);														//sp�rge bruger om en mere
		}
		break;
	}
	return 0;

}