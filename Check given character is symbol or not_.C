#include <stdio.h>
    void main()
{
    char ch;

    printf("Enter the character:\n");
    scanf(" %c", &ch);

    int up = (ch >= 'A' && ch <= 'Z');
    int low = (ch >= 'a' && ch <= 'z');
    int digit = (ch >= '0' && ch <= '9');
    int check = !up && !low && !digit;
        printf("%c is a symbol\n", ch);
}
