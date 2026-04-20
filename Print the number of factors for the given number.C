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
   printf("%d is a factor of %d\n",count,num);
 }  
