#include <stdio.h>
  void main()
  {
   char ch;
   int check;
   printf("Enter the character \n");
   scanf("%c",&ch);
   check=!(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
   printf("%c is a constant is %d",ch,check);      
   }  
