#include <stdio.h>
 void main()
  {
   int id=6969;
   int pwd=1259;
   int uid;
   int upwd;
   printf("Enter the user id\n");
   scanf("%d",&uid);
    printf("Enter the password\n");
    scanf("%d",&upwd);
    if(id==uid)
     {
      printf("user is exist \n");
      if(pwd==upwd)
      {
       printf("log-in successful \n");
       }
     else
     {
     printf("Incorrect password\n");
     }
    }  
     else
     {
     printf("user id does n't Exist \n");
     }
   }  
