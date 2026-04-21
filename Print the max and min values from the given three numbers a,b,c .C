#include <stdio.h>
 void main()
 {
  int a,b,c;
  int max;
  int min;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the value of b\n");
  scanf("%d",&b);
  printf("Enter the value of c\n");
  scanf("%d",&c);
  if(a>b && a>c)
  {
   printf("%d is the max value\n",a);
   if(b>c)
   {
    printf("%d is the min value\n",b);
   }
    else
    {
     printf("%d is the min value\n",c);
    }
  }
 else if(b>c && b>a)
 {
  printf("%d is the max value\n",b); 
  if(a>c)
  {
   printf("%d is the min value\n",c);
   }
   else
   {
    printf("%d is the min value\n",b);
    }
  }  
  else if(c>a && c>a)
  {
   printf("%d is the max value\n",c);
   if(a>b)
   {
    printf("%d is the min value\n",b);
    }
    else
    {
     printf("%d is the min value\n",a);
     }
   }
 }    
