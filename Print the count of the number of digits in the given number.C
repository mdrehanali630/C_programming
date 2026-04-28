#include<stdio.h>
 void main()
 {
  int a;
  printf("Enter  the value of a\n");
  scanf("%d",&a);
  int count=0;
  while(a!=0)
  {
   int digit=a%10;
    a=a/10;
    count++;
    }
    printf("%d is the count of the digit\n",count);
 }   
