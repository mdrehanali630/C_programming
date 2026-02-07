#include <stdio.h>
 void main()
  {
   int a,b;
   printf("Program starts \n");
   printf("Enter the value of a \n");
   scanf("%d",&a);
   printf("Enter the valu of b \n");
   scanf("%d",&b);
   if(a>b)
   { 
    printf("%d is greatest value\n",a);
    printf("%d is smallest value \n",b);
    }
    else
    {
     printf("%d is greatest value \n",b);
     printf("%d is smallest value \n",a);
     }
     printf("Program ends");
     }
