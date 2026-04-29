#include<stdio.h>
 void main()
 {
  int a;
  printf("Enter  the value of a\n");
  scanf("%d",&a);
  int rev=0;
  while(a!=0)
  {
   int digit=a%10;
   rev=rev*10+digit;
    a=a/10;
    }
    printf("The reverse number is %d\n",rev);
 }   
