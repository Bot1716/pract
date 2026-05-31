#include <reg51.h>

void delay_ms(unsigned int);

void main(void)
{
    P2 = 0x00;

    while(1)
    {
        P2 = 0x33;
        delay_ms(100);

        P2 = 0x66;
        delay_ms(100);

        P2 = 0xCC;
        delay_ms(100);

        P2 = 0x99;
        delay_ms(100);
    }
}

void delay_ms(unsigned int k)
{
    unsigned int i,j;

    for(i=0;i<k;i++)
    {
        for(j=0;j<1275;j++);
    }
}
