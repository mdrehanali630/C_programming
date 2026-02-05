#include<stdio.h>
  void main()
{
 int a,b;
 printf("Enter the value of a\n");
 scanf("%d",&a);
 printf("Enter the the value of b\n");
 scanf("%d",&b);
 int check=(b%a)==0;
 (check)?(printf("%d is a factor of b\n",a,b)):
         (printf("%d is not a factor of b\n",a,b));
    
}
