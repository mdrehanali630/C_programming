#include <stdio.h>
  void main()
   {
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int min=num>=-3;
    int max=num<=4;
    int check=min&&max;
    printf("%d is the number is %d",num,check);
    }
