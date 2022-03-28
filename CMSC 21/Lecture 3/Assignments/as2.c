#include <stdio.h>

int main(void)
{
    int dig1, dig2;
    printf("Enter a 2 digit number: ");
    scanf("%1d%1d", &dig1, &dig2);
    printf("Number entered in words: ");
    if (dig1 == 1)
    {
        switch (dig2)
        {
        case 0:
            printf("Ten");
            break;
        case 1:
            printf("Eleven");
            break;
        case 2:
            printf("Twelve");
            break;
        case 3:
            printf("Thirteen");
            break;
        case 4:
            printf("Fourteen");
            break;
        case 5:
            printf("Fifteen");
            break;
        case 6:
            printf("Sixteen");
            break;
        case 7:
            printf("Seventeen");
            break;
        case 8:
            printf("Eighteen");
        case 9:
            printf("Nineteen");
        }
    }
    else if (dig1 == 2)
    {
        printf("Twenty");
    } 
    else if (dig1 == 3)
    {
        printf("Thirty");
    }
    else if (dig1 == 4)
    {
        printf("fourty");
    }
    else if (dig1 == 5)
    {
        printf("Fifty");
    }
    else if (dig1 == 6)
    {
        printf("Sixty");
    }
    else if (dig1 == 7)
    {
        printf("Seventy");
    }
    else if (dig1 == 8)
    {
        printf("Eighty");
    }
    else if (dig1 == 9)
    {
        printf("Ninety");
    }
    switch(dig2)
    {
        case 1:
            printf("-one");
            break;
        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;
    }
    return 0;
}