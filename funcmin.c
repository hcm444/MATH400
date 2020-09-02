#include <stdio.h>
void main(void) {
 float i, a, b, sum = 0;
 printf("nnEnter the first boundary limit:");
 scanf("%f", &a);
 printf("nEnter the second boundary limit:");
 scanf("%f", &b);
 if (a > b) {
  i = a;
  a = b;
  b = i;
 }
 for (i = a; i < b; i += (b - a) / 10) {
  y = x * x + 2 * x - 4;
  sum += y * (b - a) / 10;
 }
 printf("nnValue of integration is:%.3f", sum);
 getch();
 return;
}
