#include <stdio.h>

int main(void)
{
    int a = 2, b = 3;
    if (a == 2 && b ==3)
    {
        printf( "*****\n" );
        printf( "<<<<<\n" );
    }
    else
    {
        printf( "-----" );
        printf( ">>>>>\n" );
    }
    return 0;
}