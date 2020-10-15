#include <stdio.h>
#include <conio.h>
//Exercise 2.5
//Lav følgende ændring til dit program fra Exercise 2.4.Brugeren skal selv vælge om
//han / hun vil have foretaget en ny beregning.Dvs.at while - loopen ikke skal køre for
//altid, men derimod kun så længe brugeren indtaster et bestemt værdi – f.eks.’y’.
//Dette kræver en ekstra indtastning fra brugeren, som skal foretages efter den
//første beregning og udskrift af erstatningsmodstanden(hint 2E).

int main(void)
{

	int mode = 1;

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


	return 0;
}