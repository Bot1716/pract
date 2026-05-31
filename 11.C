#include <reg51.h>

sfr ldata = 0x90;

sbit rs   = P3^3;
sbit rw   = P3^4;
sbit en   = P3^5;
sbit busy = P1^7;

void lcdcmd(unsigned char);
void lcddata(unsigned char);
void lcdready(void);
void Delay(unsigned int);

void main(void)
{
    ldata = 0x00;

    lcdcmd(0x38);   // 8-bit mode, 2 lines
    lcdcmd(0x0E);   // Display ON, Cursor ON
    lcdcmd(0x06);   // Increment cursor
    lcdcmd(0x01);   // Clear display

    while(1)
    {
        lcdcmd(0x80);   // First line, first position

        lcddata('A');
        lcddata('T');
        lcddata('8');
        lcddata('9');
        lcddata('c');
        lcddata('5');
        lcddata('1');

        Delay(250);
    }
}

void lcdcmd(unsigned char value)
{
    lcdready();

    ldata = value;
    rs = 0;
    rw = 0;
    en = 1;

    Delay(1);

    en = 0;
}
