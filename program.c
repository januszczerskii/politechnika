#include <stdio.h>

int main()
{
char c0 = 127;
char c1 = 127;
signed char c2 = 127;
unsigned char c3 = 127;
printf("%c, %c, %c, %c, %c \n", c0, c1, c2, c3);
printf("%i, %i, %i, %i, %i \n", i0, i1, i2, i3);

c0++;
c1=++;
c2=++;
c3=++;

printf("%c, %c, %c, %c, %c \n", c0, c1, c2, c3);
printf("%i, %i, %i, %i, %i \n", i0, i1, i2, i3);




    return 0;
}