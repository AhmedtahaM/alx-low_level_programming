#include <stdio.h>
#include "main.h"

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

  /*
   * Instead of trying to modify memory outside the bounds of p,
   * we can use a directly to achieve the desired output.
   */
a[2] = 98;

printf("a[2] = %d\n", a[2]);
return (0);
}
