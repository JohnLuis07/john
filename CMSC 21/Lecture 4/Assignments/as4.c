#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    printf("Enter n term: ");
    scanf("%d", &n);
    while (n >= 0) 
    {
        
        printf("%d ", i);
        i *= 2;
        n --;
    }
    return 0;
}