#include<stdio.h>
 void main()
 {
  int a;
  printf("Enter  the value of a\n");
  scanf("%d",&a);
  int sum=0;
  while(a!=0)
  {
   int digit=a%10;
   sum=sum+digit;
    a=a/10;
    }
    printf(" The sum of the digit is %d\n",sum);
 }   
