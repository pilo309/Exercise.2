#include <stdio.h>
#include <conio.h>
//Exercise 2.5
//Lav f�lgende �ndring til dit program fra Exercise 2.4.Brugeren skal selv v�lge om
//han / hun vil have foretaget en ny beregning.Dvs.at while - loopen ikke skal k�re for
//altid, men derimod kun s� l�nge brugeren indtaster et bestemt v�rdi � f.eks.�y�.
//Dette kr�ver en ekstra indtastning fra brugeren, som skal foretages efter den
//f�rste beregning og udskrift af erstatningsmodstanden(hint 2E).

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