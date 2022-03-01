//Preprocessor Directive
#include <stdio.h>

//serve as the function in running the program
int main(void)
{
    //declares the variable i and j as an integer so they will hold integer values
    int i, j;
    //declares the variable x and y as a float so they will hold float values
    float x, y;

    //Variables that are use to store integers or float numbers
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /*print function that print out the value inside the parenthesis, it includes the varia
    the variable with the %d and %f it means that the value of the variable was suppose to be integer in %d while
    float for %f and the way you position the %d and %f data will make the corresponding variables the the same
    data type depends on what position assigned to it for example if the first position has %d the first variable
    will be assumed as an integer*/
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    //calls the function
    return 0;
}