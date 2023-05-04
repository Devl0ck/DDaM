#include <8052.H>
void main()
{
char *result = "0     ";
int a, b, flag;
P0 = 0x80; P2 = 0x1; P2 = 0x0;
while(1)
{
P10 = 0;
if(P14 == 0){flag = 1; P0 = '+'; P2 = 0x3; P2 = 0x2;}
if(P15 == 0)
{ 
	if(P0 == 0x80) {a = 9; P0 = '9'; P2 = 0x3; P2 = 0x2; }
	else {b = 9; P0 = '9'; P2 = 0x3; P2 = 0x2; }
}
if(P16 == 0)
{ 
	if(P0 == 0x80) {a = 8; P0 = '8'; P2 = 0x3; P2 = 0x2; }
	else {b = 8;P0 = '8'; P2 = 0x3; P2 = 0x2;
	}
}
if(P17 == 0)
{ 
	if(P0 == 0x80) {a = 7; P0 = '7'; P2 = 0x3; P2 = 0x2; }
	else {b = 7; P0 = '7'; P2 = 0x3; P2 = 0x2; }
}
P10 = 1;
P11 = 0;
if(P14 == 0){flag = 2; P0 = '-'; P2 = 0x3; P2 = 0x2;}
if(P15 == 0)
{ 
	if(P0 == 0x80) {a = 6; P0 = '6'; P2 = 0x3; P2 = 0x2; }
	else {b = 6; P0 = '6'; P2 = 0x3; P2 = 0x2; }
}
if(P16 == 0)
{ 
	if(P0 == 0x80) {a = 5; P0 = '5'; P2 = 0x3; P2 = 0x2; }
	else {b = 5; P0 = '5'; P2 = 0x3; P2 = 0x2; }
}
if(P17 == 0)
{ 
	if(P0 == 0x80) {a = 4; P0 = '4'; P2 = 0x3; P2 = 0x2; }
	else {b = 4; P0 = '4'; P2 = 0x3; P2 = 0x2; }
}
P11 = 1;
P12 = 0;
if(P14 == 0){flag = 3; P0 = '*'; P2 = 0x3; P2 = 0x2;}
if(P15 == 0)
{ 
	if(P0 == 0x80) {a = 3; P0 = '3'; P2 = 0x3; P2 = 0x2; }
	else {b = 3; P0 = '3'; P2 = 0x3; P2 = 0x2; }
}
if(P16 == 0)
{ 
	if(P0 == 0x80) {a = 2; P0 = '2'; P2 = 0x3; P2 = 0x2; }
	else {b = 2; P0 = '2'; P2 = 0x3; P2 = 0x2; }
}
if(P17 == 0)
{ 
	if(P0 == 0x80) {a = 1; P0 = '1'; P2 = 0x3; P2 = 0x2; }
	else {b = 1; P0 = '1'; P2 = 0x3; P2 = 0x2; }
}
P12 = 1;
P13 = 0;
if(P14 == 0){flag = 4; P0 = '/'; P2 = 0x3; P2 = 0x2;}
if(P15 == 0)
{ 
	P0 = 0x1; P2 = 0x1; P2 = 0x0;  
	P0 = result[0]; P2 = 0x3; P2 = 0x2;
	P0 = result[1]; P2 = 0x3; P2 = 0x2;
	P0 = result[2]; P2 = 0x3; P2 = 0x2;
	P0 = result[3]; P2 = 0x3; P2 = 0x2;
	P0 = result[4]; P2 = 0x3; P2 = 0x2;
	P0 = result[5]; P2 = 0x3; P2 = 0x2;
}
if(P16 == 0)
{ 
	if(P0 == 0x80) {a = 0; P0 = '0'; P2 = 0x3; P2 = 0x2; }
	else {b = 0; P0 = '0'; P2 = 0x3; P2 = 0x2; }
}
if(P17 == 0)
{ 
P0 = 0x1; P2 = 0x1; P2 = 0x0;
P0 = 0x80;P2 = 0x1;P2 = 0x0;
result = "0     "; a = 0; b = 0; flag = 0;
}
P13 = 1;
if(flag == 1)
{
	if(a == 0)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "1     "; if (b == 2) result = "2     ";
		if (b == 3) result = "3     "; if (b == 4) result = "4     "; if (b == 5) result = "5     ";
		if (b == 6) result = "6     "; if (b == 7) result = "7     "; if (b == 8) result = "8     ";
		if (b == 9) result = "9     ";
	}
	if(a == 1)
	{
		if (b == 0) result = "1     "; if (b == 1) result = "2     "; if (b == 2) result = "3     ";
		if (b == 3) result = "4     "; if (b == 4) result = "5     "; if (b == 5) result = "6     ";
		if (b == 6) result = "7     "; if (b == 7) result = "8     "; if (b == 8) result = "9     ";
		if (b == 9) result = "10    ";
	}
	if(a == 2)
	{
		if (b == 0) result = "2     "; if (b == 1) result = "3     "; if (b == 2) result = "4     ";
		if (b == 3) result = "5     "; if (b == 4) result = "6     "; if (b == 5) result = "7     ";
		if (b == 6) result = "8     "; if (b == 7) result = "9     "; if (b == 8) result = "10    ";
		if (b == 9) result = "11    ";
	}
	if(a == 3)
	{
		if (b == 0) result = "3     "; if (b == 1) result = "4     "; if (b == 2) result = "5     ";
		if (b == 3) result = "6     "; if (b == 4) result = "7     "; if (b == 5) result = "8     ";
		if (b == 6) result = "9     "; if (b == 7) result = "10    "; if (b == 8) result = "11    ";
		if (b == 9) result = "12    ";
	}
	if(a == 4)
	{
		if (b == 0) result = "4     "; if (b == 1) result = "5     "; if (b == 2) result = "6     ";
		if (b == 3) result = "7     "; if (b == 4) result = "8     "; if (b == 5) result = "9     ";
		if (b == 6) result = "10    "; if (b == 7) result = "11    "; if (b == 8) result = "12    ";
		if (b == 9) result = "13    ";
	}
	if(a == 5)
	{
		if (b == 0) result = "5     "; if (b == 1) result = "6     "; if (b == 2) result = "7     ";
		if (b == 3) result = "8     "; if (b == 4) result = "9     "; if (b == 5) result = "10    ";
		if (b == 6) result = "11    "; if (b == 7) result = "12    "; if (b == 8) result = "13    ";
		if (b == 9) result = "14    ";
	}
	if(a == 6)
	{
		if (b == 0) result = "6     "; if (b == 1) result = "7     "; if (b == 2) result = "8     ";
		if (b == 3) result = "9     "; if (b == 4) result = "10    "; if (b == 5) result = "11    ";
		if (b == 6) result = "12    "; if (b == 7) result = "13    "; if (b == 8) result = "14    ";
		if (b == 9) result = "15    ";
	}
	if(a == 7)
	{
		if (b == 0) result = "7     "; if (b == 1) result = "8     "; if (b == 2) result = "9     "; 
		if (b == 3) result = "10    "; if (b == 4) result = "11    "; if (b == 5) result = "12    "; 
		if (b == 6) result = "13    "; if (b == 7) result = "14    "; if (b == 8) result = "15    ";
		if (b == 9) result = "16    ";
	}
}
if(flag == 2)
{
	if(a == 0)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "-1    "; if (b == 2) result = "-2    ";
		if (b == 3) result = "-3    "; if (b == 4) result = "-4    "; if (b == 5) result = "-5    ";
		if (b == 6) result = "-6    "; if (b == 7) result = "-7    "; if (b == 8) result = "-8    ";
		if (b == 9) result = "-9    ";
	}
	if(a == 1)
	{
		if (b == 0) result = "1     "; if (b == 1) result = "0     "; if (b == 2) result = "-1    ";
		if (b == 3) result = "-2    "; if (b == 4) result = "-3    "; if (b == 5) result = "-4    ";
		if (b == 6) result = "-5    "; if (b == 7) result = "-6    "; if (b == 8) result = "-7    ";
		if (b == 9) result = "-8    ";
	}
	if(a == 2)
	{
		if (b == 0) result = "2     "; if (b == 1) result = "1     "; if (b == 2) result = "0     ";
		if (b == 3) result = "-1    "; if (b == 4) result = "-2    "; if (b == 5) result = "-3    ";
		if (b == 6) result = "-4    "; if (b == 7) result = "-5    "; if (b == 8) result = "-6    ";
		if (b == 9) result = "-7    ";
	}
	if(a == 3)
	{
		if (b == 0) result = "3     "; if (b == 1) result = "2     "; if (b == 2) result = "1     ";
		if (b == 3) result = "0     "; if (b == 4) result = "-1    "; if (b == 5) result = "-2    ";
		if (b == 6) result = "-3    "; if (b == 7) result = "-4    "; if (b == 8) result = "-5    ";
		if (b == 9) result = "-6    ";
	}
	if(a == 4)
	{
		if (b == 0) result = "4     "; if (b == 1) result = "3     "; if (b == 2) result = "2     ";
		if (b == 3) result = "1     "; if (b == 4) result = "0     "; if (b == 5) result = "-1    ";
		if (b == 6) result = "-2    "; if (b == 7) result = "-3    "; if (b == 8) result = "-4    ";
		if (b == 9) result = "-5    ";
	}
	if(a == 5)
	{
		if (b == 0) result = "5     "; if (b == 1) result = "4     "; if (b == 2) result = "3     ";
		if (b == 3) result = "2     "; if (b == 4) result = "1     "; if (b == 5) result = "0     ";
		if (b == 6) result = "-1    "; if (b == 7) result = "-2    "; if (b == 8) result = "-3    ";
		if (b == 9) result = "-4    ";
	}
	if(a == 6)
	{
		if (b == 0) result = "6     "; if (b == 1) result = "5     "; if (b == 2) result = "4     ";
		if (b == 3) result = "3     "; if (b == 4) result = "2     "; if (b == 5) result = "1     ";
		if (b == 6) result = "0     "; if (b == 7) result = "-1    "; if (b == 8) result = "-2    ";
		if (b == 9) result = "-3    ";
	}
	if(a == 7)
	{
		if (b == 0) result = "7     "; if (b == 1) result = "6     "; if (b == 2) result = "5     ";
		if (b == 3) result = "4     "; if (b == 4) result = "3     "; if (b == 5) result = "2     ";
		if (b == 6) result = "1     "; if (b == 7) result = "0     "; if (b == 8) result = "-1    ";
		if (b == 9) result = "-2    ";
	}
}
if(flag == 3)
{
	if(a == 0) result = "0     ";
	if(a == 1)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "1     "; if (b == 2) result = "2     ";
		if (b == 3) result = "3     "; if (b == 4) result = "4     "; if (b == 5) result = "5     ";
		if (b == 6) result = "6     "; if (b == 7) result = "7     "; if (b == 8) result = "8     ";
		if (b == 9) result = "9     ";
	}
	if(a == 2)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "2     "; if (b == 2) result = "4     ";
		if (b == 3) result = "6     "; if (b == 4) result = "8     "; if (b == 5) result = "10    ";
		if (b == 6) result = "12    "; if (b == 7) result = "14    "; if (b == 8) result = "16    ";
		if (b == 9) result = "18    ";
	}
	if(a == 3)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "3     "; if (b == 2) result = "6     ";
		if (b == 3) result = "9     "; if (b == 4) result = "12    "; if (b == 5) result = "15    ";
		if (b == 6) result = "18    "; if (b == 7) result = "21    "; if (b == 8) result = "24    ";
		if (b == 9) result = "27    ";
	}
	if(a == 4)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "4     "; if (b == 2) result = "8     ";
		if (b == 3) result = "12    "; if (b == 4) result = "16    "; if (b == 5) result = "20    ";
		if (b == 6) result = "24    "; if (b == 7) result = "28    "; if (b == 8) result = "32    ";
		if (b == 9) result = "36    ";
	}
	if(a == 5)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "5     "; if (b == 2) result = "10    ";
		if (b == 3) result = "15    "; if (b == 4) result = "20    "; if (b == 5) result = "25    ";
		if (b == 6) result = "30    "; if (b == 7) result = "35    "; if (b == 8) result = "40    ";
		if (b == 9) result = "45    ";
	}
	if(a == 6)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "6     "; if (b == 2) result = "12    ";
		if (b == 3) result = "18    "; if (b == 4) result = "24    "; if (b == 5) result = "30    ";
		if (b == 6) result = "36    "; if (b == 7) result = "42    "; if (b == 8) result = "48    ";
		if (b == 9) result = "54    ";
	}
	if(a == 7)
	{
		if (b == 0) result = "0     "; if (b == 1) result = "7     "; if (b == 2) result = "14    "; 
		if (b == 3) result = "21    "; if (b == 4) result = "28    "; if (b == 5) result = "35    "; 
		if (b == 6) result = "42    "; if (b == 7) result = "49    "; if (b == 8) result = "56    ";
		if (b == 9) result = "63    ";
	}
}
if(flag == 4)
{
	if(a == 0)
	{
		if (b == 0) result = "######";
		else result = "0     ";
	}
	if(a == 1)
	{
		if (b == 0) result = "######"; if (b == 1) result = "1     "; if (b == 2) result = "0.5   ";
		if (b == 3) result = "0.(3) "; if (b == 4) result = "0.25  "; if (b == 5) result = "0.2   ";
		if (b == 6) result = "0.1(6)"; if (b == 7) result = "0.1428"; if (b == 8) result = "0.125 ";
		if (b == 9) result = "0.(1) ";
	}
	if(a == 2)
	{
		if (b == 0) result = "######"; if (b == 1) result = "2     "; if (b == 2) result = "1     ";
		if (b == 3) result = "0.(6) "; if (b == 4) result = "0.5   "; if (b == 5) result = "0.4   ";
		if (b == 6) result = "0.(3) "; if (b == 7) result = "0.2857"; if (b == 8) result = "0.25  ";
		if (b == 9) result = "0.(2) ";
	}
	if(a == 3)
	{
		if (b == 0) result = "######"; if (b == 1) result = "3     "; if (b == 2) result = "1.5   ";
		if (b == 3) result = "1     "; if (b == 4) result = "0.75  "; if (b == 5) result = "0.6   ";
		if (b == 6) result = "0.5   "; if (b == 7) result = "0.4285"; if (b == 8) result = "0.375 ";
		if (b == 9) result = "0.(3) ";
	}
	if(a == 4)
	{
		if (b == 0) result = "######"; if (b == 1) result = "4     "; if (b == 2) result = "2     ";
		if (b == 3) result = "1.(3) "; if (b == 4) result = "1     "; if (b == 5) result = "0.8   ";
		if (b == 6) result = "0.(6) "; if (b == 7) result = "0.5714"; if (b == 8) result = "0.5   ";
		if (b == 9) result = "0.(4) ";
	}
	if(a == 5)
	{
		if (b == 0) result = "######"; if (b == 1) result = "5     "; if (b == 2) result = "2.5   ";
		if (b == 3) result = "1.(6) "; if (b == 4) result = "1.25  "; if (b == 5) result = "1     ";
		if (b == 6) result = "0.8(3)"; if (b == 7) result = "0.7142"; if (b == 8) result = "0.625 ";
		if (b == 9) result = "0.(5) ";
	}
	if(a == 6)
	{
		if (b == 0) result = "######"; if (b == 1) result = "6     "; if (b == 2) result = "3     ";
		if (b == 3) result = "2     "; if (b == 4) result = "1.5   "; if (b == 5) result = "1.2   ";
		if (b == 6) result = "1     "; if (b == 7) result = "0.8571"; if (b == 8) result = "0.75  ";
		if (b == 9) result = "0.(6) ";
	}
	if(a == 7)
	{
		if (b == 0) result = "######"; if (b == 1) result = "7     "; if (b == 2) result = "3.5   "; 
		if (b == 3) result = "2.(3) "; if (b == 4) result = "1.75  "; if (b == 5) result = "1.4   "; 
		if (b == 6) result = "1.1(6)"; if (b == 7) result = "1     "; if (b == 8) result = "0.875 ";
		if (b == 9) result = "0.(7) ";
	}
}
}
}