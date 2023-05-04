#include <8051.h>

void tput(unsigned char c1)
{
	SBUF = c1; 
	while(!TI); 
	TI = 0; 
}

void main()
{
	int i;
	unsigned char src1[]={'E','P','H','A','3','A','P','O','B','A'};
	unsigned char src2[]={'D','u','J','I','D','O','P','A'};
	unsigned char src3[]={'6','E','P','D','u','M','y','P','A','T','O','B','H','A'};
	PCON = 0x80;
	TMOD = 0x20;
	TR1 = 1;
	TH1 = -3;
	for(i=0; i<10; i++)
	{
		ACC = src1[i]; 
		SCON = 0x50;
		tput (src1[i]);
	}
    tput(10);
	for(i=0; i<8; i++)
	{
		ACC = src2[i]; 
		SCON = 0x50;
		tput (src2[i]);
	}
	tput(10);
    for(i=0; i<14; i++)
	{
		ACC = src3[i]; 
		SCON = 0x50;
		tput (src3[i]);
	}
while(1){} 
}