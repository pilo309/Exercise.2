#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

//Brug nu nogle af disse funktioner til at skrive noget kode(i main() i det projekt du
//	oprettede i Exercise 2.0), der tænder og slukker en eller flere lysdioder.Du bestemmer selv hvordan den / de skal tænde og slukke(blinke, løbelys eller hvad du nu
//		finder på - have fun ) (hint 2A).

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	while (1)
	{

		ledOn(1);
		Wait(500);
		ledOn(2);
		Wait(500);
		ledOn(3);
		Wait(500);
		ledOn(4);
		Wait(500);
		ledOn(5);
		Wait(500);
		ledOn(6);
		Wait(500);

		ledOff(6);
		Wait(500);
		ledOff(5);
		Wait(500);
		ledOff(4);
		Wait(500);
		ledOff(3);
		Wait(500);
		ledOff(2);
		Wait(500);
		ledOff(1);
		Wait(500);
	}

	return 0;
}