#include <stdio.h>
#include <math.h>

int main(void)
{
    //declares all the variable as a float
    float x, y, z, tol = 0.00001;

    printf("Enter number to find its square root: ");
    scanf("%f", &x);

    //set an initial guess as y = 1
    y = 1;
    //set as 0 because first it has no value 
    z = 0; 

    //will continue to iterate until the absolute value of z-y is not less than 0.00001
    while(fabs(z - y) >= tol)
    { 
        z = y; //that z will contain the last value of y
        y = ((y + (x / y))/2);
    }

    y = fabs(y); //change the value of y to its absolute value
    printf("Root Approximation: %f.\n", y);
    return 0;
}