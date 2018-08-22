#include <iostream>
#include <stdio.h>
using namespace std;

int main()

{

	int startH, startM, endH, endM, totalM, totalH;

	
	cin >> startH >> startM >> endH >> endM;

	totalH = endH - startH;

	if (totalH < 0)

	{

		totalH = 24 + (endH - startH);

	}

	totalM = endM - startM;

	if (totalM < 0)

	{

		totalM = 60 + (endM - startM);

		totalH--;

	}

	if (endH == startH && endM == startH)

	{

		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

	}

	else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalH, totalM);
	



	return 0;

}