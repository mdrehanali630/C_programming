#include <stdio.h>
 void main()
  {
   int a;
   printf("Program starts \n");
   printf("Enter the value of a \n");
   scanf("%d",&a);
   if(a==0)
   { 
    printf("%d is zero\n",a);
    }
    else if(a<0)
    {
     printf("%d is negative value\n",a);
     }
     else
     {
     printf("%d is positive value\n",a);
     }
     printf("%d program ends");
     }
