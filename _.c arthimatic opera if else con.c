#include <stdio.h>
 void main ()
 {int a = 4, b = 6;
int z = 5;
if (z < 5)
{
    printf("%d", a + b - a/2);
  }
else if (z < 9)
{
    printf("%d", a * b + z);
    }
else{
    printf("%d", a - b + z);
    }
    }