#include <stdio.h>
#include <math.h>

//Skriv et program hvor brugeren skal indtaste
//koefficienterne A, B og C fra en 2. gradsligning(NB!Kun koefficienterne A, B of C
//	fra ligningen Ax2 + Bx + C = 0 skal indtastes) (hint 2B).
//	Herefter skal programmet beregne diskriminanten, derefter beregne rødderne og til
//	sidst udskrive disse på skærmen.Husk, at værdien af diskriminanten bestemmer,
//	om der er ingen, om der er en eller om der er to rødder.Disse tre tilfælde skal
//	behandles hver for sig vha.en if / else - struktur(hint 2C).

//Pseudokode indtastning af ABC i andengradsligning skal kunne udregne diskriminant,
//og hvor mange rødder der er ift. diskriminanten samt finde løsningen/løsningerne

int main(void)
{
	double A,B,C;
	double diskriminant, roedder, loesning1, loesning2;

	printf_s("Indtast A i andengradsligningen\n");
	scanf_s("%lf", &A);

	printf_s("\n\nIndtast B i andengradsligningen\n");
	scanf_s("%lf", &B);

	printf_s("\n\nIndtast C i andengradsligningen\n");
	scanf_s("%lf", &C);

	diskriminant = (B * B) - (4 * A * C);

		if (diskriminant > 0)
		{ 

		printf_s("Der er nu 2 loesninger da diskriminanten er lig %lf", diskriminant);

		loesning1 = (-B + sqrt(diskriminant)) / (2 * A);

		loesning2 = (-B - sqrt(diskriminant)) / (2 * A);

		printf_s("\nLoesningerne vil ergo vaere %lf, og %lf", loesning1, loesning2);
		}

		else if (diskriminant == 0)
		{
			printf_s("\nDer er kun en loesning da diskriminanten er lig %lf\n", diskriminant);

			loesning1 = (-B + sqrt(diskriminant)) / (2 * A);

			printf_s("Loesningen vil ergo være %lf", loesning1);

		}

		else

		{
			printf_s("\nDer er ingen loesning da diskriminanten er %lf og dermed negativ", diskriminant);

		}

	return 0;
}