#include <8051.h>

void main()
{
	unsigned char i,j; // 8-bit peremen
	
	unsigned char massiv [11]=
	{
		0x90, // 9
		0xF9, // 1
		0xA4, // 2
		0xB0, // 3
		0x80, // 8
		0x99, // 4
		0x92, // 5
		0x82, // 6
		0xF8, // 7
		0xFF  // off
	};
	P1=massiv [10]; //vkl indik
	for(i=0;i<10;i++) //vivod koda b port 2
	{
		P2=massiv[i]; //kodi ot 0 do 9
		for(j=0;j<100;j++)
			//zaderjka
			continue;
	}
	P2=massiv[10]; //vikl indik
	//while(1);
}