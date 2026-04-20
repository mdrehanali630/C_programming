#include <stdio.h>
 void main()
 {
  int count=0;
  int num;
  int a;
  printf("Enter the number \n");
  scanf("%d",&num);
  for(a=1;a<=num;a++)
  {
   if(num%a==0)
   {
    count++;
   }
  }
   if(count==2)
   {
   printf("%d is prime number\n",num);
   }
   else
   {
    printf("%d is not a prime number\n",num);
    }
 }  
