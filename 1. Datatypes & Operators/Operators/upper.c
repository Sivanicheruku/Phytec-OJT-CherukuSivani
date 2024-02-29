#include <stdio.h>

char toLower(char c) {

    if (c >= 'A' && c <= 'Z') 
    {
        c |= (1 << 5);
    }
 printf("%c\n",c);
}

int main()
{
    char c;
    printf("Enter an uppercase character: ");
    scanf("%c", &c);
    toLower(c);

}

