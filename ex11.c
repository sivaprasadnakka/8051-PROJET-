#include <reg51.h>  //  8051 register definitions header
sbit led=P2^0;
sbit sw =P2^7;
void delay(unsigned int x)
{
    int i;
    for(i = 0; i < x; i++);  // Simple delay loop
}

void main()
{
	sw = 1;  
	led = 0;
	 P1 = 0x00;
	while(1)
	{
		
		      P1 = P1 ^ 0x01;  // Toggle P1.0 (XOR with 0x01)
        delay(10000);     
           // Delay to control led•
			if(sw==0)
			{
				led=1;
				delay(1000);
			}
			else
			{
				led=0;
		}  
    	
    }
	}
		


•