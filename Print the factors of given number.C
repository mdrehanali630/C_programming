#include <stdio.h>
 void main()
 {
  int num;
  int a;
  printf("Enter the number \n");
  scanf("%d",&num);
  for(a=1;a<=num;a++)
  {
   if(num%a==0)
   {
    printf("%d is a factor of %d\n",a,num);
    }
  }
 }  
