#include <stdio.h>
  void main()
   {
    int age;
    printf("#nter the age \n");
    scanf("%d",&age);
    int min=age>=18;
    int max=age<60;
    int check=min&&max;
    printf("%d is an eligible age is %d",age,check);
    }
