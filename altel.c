#include <stdio.h>
int main(int argc, char *argv[])
{
 int n, x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, y, y1, y2, y1d, y2d;

 for (n=0; n<64; n++)
 {
 // Logic functions and partial derivatives by !x11
 y1 = (!x1 && (x2 || x3) && (x4 || !x2)) ||
 (x1 && ((!x5 && x6) || x2) || (x5 && !x6) ||
 (!x2 && !x3 && x4));

 y2 = (!x1 && (x2 || !x5) && (!x2 || (!x3 && x6))) ||
 (x1 && x4 && x5 && (( x3 && !x6) || (x2 && !x3)));

 y1d = ((x2 || x3) && (x4 || !x2)) &&
 !(x1 && ((!x5 && x6) || x2) || (x5 && !x6) ||
 (!x2 && !x3 && x4));

 y2d = ((x2 || !x5) && (!x2 || (!x3 && x6))) &&
 !(x1 && x4 && x5 && (( x3 && !x6) || (x2 && !x3)));

 // Solve y(x1,x2,...,x6) = 1
 y = !y2 && y1d;
 // y = !y1 && y2d;

 if (y == 1)
 {
 printf("%d%d%d%d%d%d\n", x1, x2, x3, x4, x5, x6);
 }

 x6++;
 if (x6 > 1)
 {
 x6=0; x5++;
 if (x5 > 1)
 {
 x5=0; x4++;
 if (x4 > 1)
 {
 x4=0; x3++;
 if (x3 > 1)
 {
 x3=0; x2++;
 if (x2 > 1)
 { 
 x2=0; x1++;
 if (x1 > 1)
 {
 x1=0; x2=0; x3=0; x4=0; x5=0; x6=0;
 }
 }
 }
 }
 }
 }
 }
} 