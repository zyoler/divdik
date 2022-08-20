#include <stdio.h>

void main()
{
int x = 5, *y, *z;
z = &x;
x = 3;
y = &x;
*y = 7;
printf("%d : %d : %d", &*x, z, *&*y);
}