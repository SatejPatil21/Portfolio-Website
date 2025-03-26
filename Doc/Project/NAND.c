#include <stdio.h>
#include <graphics.h>
void drawNANDGate(int x, int y)
{
// Draw inputs
// line(x- 100, y - 50, x - 50, y - 50): 7/ Imput A
//line(x - 100, y + 50, x - 50, y + 50): // Imput B
//// Draw output
//line(x + 100, y, x + 150, y); // 0utput
//line(x + 100, y - 50, x + 100, y + 50);

//Draw NAND gate symbol
arc(x - 100, y , 270, 90, 50);
line(x - 100, y - 50, x - 100, y + 50);
outtextxy(x, y, "1");
line(x , y, x - 50,y);
line(x - 150, y - 25, x - 100, y - 25);
line(x - 150, y + 25, x - 100, y + 25);
}
int main()
{
int gd = DETECT, gm;
int x = 320;
int y = 240;
initgraph(&gd, &gm, "");
drawNANDGate(x, y);
delay (5000);
closegraph();
return 0;
}
