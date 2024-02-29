#include<stdio.h>
int main() 
{
    int num;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using bitwise AND operator to check the least significant bit
    if (num & 1) {
        printf("%d is an odd  number.\n", num);
    } 
    else {
        printf("%d is an even number.\n", num);
    }

    return 0;
}
