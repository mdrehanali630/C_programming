#include <stdio.h>
  void main()
  {
   int a1;
   printf("Enter the number\n");
   scanf("%d",&a1);
   int rem=a1%2;
   int check=rem==0;
   printf("%d is the Even number is %d",a1,check);
  }
