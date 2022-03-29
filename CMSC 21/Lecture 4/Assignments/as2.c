#include <stdio.h>
int main(void)
{
    //Output: 0 1 2 3 4 5 6 7 8 9 
    int i;
    i = 0;
    while (i < 10) 
    {
    printf("%d ", i);
    i ++;
    }
    
    printf("\n");

    //Output: 0 1 2 3 4 5 6 7 8 9
    for (i = 0; i < 10; i++)
    printf("%d ", i);
    printf("\n");
    
    //output: 10
    i = 0;
    do 
    {
        i++;
    }
    while (i < 10);
    printf("%d ", i);

    

    return 0;
}