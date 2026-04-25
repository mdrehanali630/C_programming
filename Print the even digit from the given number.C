#include<stdio.h>
 void main()
 {
  int a;
  printf("Enter  the value of a\n");
  scanf("%d",&a);
  while(a!=0)
  {
   int digit=a%10;
   if(digit%2==0)
   {
    printf("%d is even number\n",digit);
    }
   a=a/10;
   }
 }   
