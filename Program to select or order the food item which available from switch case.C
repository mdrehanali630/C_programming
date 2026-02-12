#include <stdio.h>
 void main()
  {
   int option;
   printf("The food items available \n");
   printf("1.Pani puri \n");
   printf("2.Cotton candy \n");
   printf("3.Chicken biryani \n");
   printf("4.Bitter gaurd \n");
   printf("Please enter the option to select the food item \n");
   scanf("%d",&option);
   switch(option)
   {
    case 1:
    {
     printf("Pani Puri is ordered \n");
     }break;
     case 2:
     {
     printf("Cotton candy is oderded \n");
     }break;
     case 3:
     {
     printf("chicken biryani is ordered \n");
     }break;
     case 4:
     {
      printf("Bitter gaurd is ordered \n");
      }break;
      default:
      {
       printf("Please select the valid option \n");
       }break;
     }
   }    
     
