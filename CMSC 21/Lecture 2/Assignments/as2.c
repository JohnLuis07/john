#include <stdio.h>

int main()
{
    int num, remainder, reversed, init_num;
    printf("Please enter a 3-digit number: ");
    scanf(" %d", &init_num);

    remainder = init_num % 10;
    reversed = remainder * 100;
    remainder = ((init_num/10) % 10) * 10;
    reversed = reversed + remainder;
    remainder = (init_num/100);
    reversed = reversed + remainder;

    printf("Reverse: %d", reversed);


    return;
}