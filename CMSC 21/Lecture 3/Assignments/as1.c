#include <stdio.h>

int main(void)
{
    int age, teenager;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("%d", age >= 13 && age <= 19);

    return 0;
}