#include<stdio.h>
int total;           // global variable

int square(int x)
{
   return x*x;
}

int squareOfSum(int x, int y)
{
   int z = square(x+y);
   return z;
}

void main()
{
   int a = 4;
   printf("this is sample program of C: %d", a);
}
