#include <stdio.h>
   void main()
{
    char ch;
    printf("Enter the alphabet:\n");
    scanf(" %c", &ch);
    int check=ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
        printf("%c is a vowel is %d", ch,check);
    
}
