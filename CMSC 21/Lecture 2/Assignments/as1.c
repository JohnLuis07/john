#include <stdio.h>

int main()
{
    int num, remainder, reversed, init_num;
    printf("Please enter a 2-digit number: ");
    scanf(" %d", &init_num);

    remainder = init_num % 10;
    reversed = remainder * 10 + (init_num/10);

    printf("Reverse: %d", reversed);


    return;
}