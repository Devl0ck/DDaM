#include <8051.h>

void str1Line(char* str, int length, int space)
{
    unsigned short i;

    // Add spaces at the beginning of the line
    for (i = 0; i < space; i++)
    {
        P0 = ' ';
        P2 = 0x3;
        P2 = 0x2;
    }

    // Output the string until the end of the line
    for (i = 0; i < length && i < 16 - space; i++)
    {
        P0 = str[i];
        P2 = 0x3;
        P2 = 0x2;
    }
}

void main()
{
	unsigned int i;
	unsigned char *str="Hello";
	unsigned char *str2="World!";
	unsigned short space = 0;
	
	while(1)
	{
		P0 = 0x38;
		P2 = 0x1;
		P2 = 0x0;
		P0 = 0x80;
		P2 = 0x1;
		P2 = 0x0;

		str1Line(str, 5, space);
		space++;
	
		P0 = 0xC0+5;
		P2 = 0x1;
		P2 = 0x0;
	
		for(i=0;i<6;i++) // LCD 2
		{
			P0 = str2[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
}
