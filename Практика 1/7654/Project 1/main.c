#include <8051.h> 

void main()
{
	int i;
	char xdata *ptr; 
	char test, nabor;
	nabor = 0x55; // testovii nabor
	ptr = (char xdata *) 0x00; // nachalnii adres vneshnei pamati

	for(i=0; i<8; i++)	// proverka 64 echeek pamati
	{
		*ptr=nabor; 
		test=*ptr; 
		if(test!=nabor)
		{
			break;	
		}
	ptr++;
	}
}
