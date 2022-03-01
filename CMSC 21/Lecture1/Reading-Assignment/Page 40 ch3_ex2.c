//Preprocessor Directive
#include <stdio.h>

//serve as the function in running the program
int main(void)
{
    //declares the variable i as an integer so it will hold integer values
    int i;
    //declares the variable x as a float so it will hold integer values
    float x;
    
    //Variables that are use to store integer or float numbers
    i = 40;
    x = 839.21f;

    /*print function that prints out the value inside the parenthesis, includes the variable with %d for 
    integer and %f for float. The extra symbol | is to show how much space does it consume. in %5d it displays 
    5 minumum character if it does lack of number of character it will create spaces, same in %-5 but in this case
    if it is lack of number of characters it will create spaces in the right side and for %5.3 displays a minimum of five characters
    overaJI and a minin1um of three digits*/
    printf("|%d|%5d|%-5d|%5.3d| \n", i, i, i, i);

    /*also a print function same as the first one but this data type was different the %10.3f gives fixed decimal float value with 10 characters
    , %10.3e gives exponential value with also 10 characters and has 3 decimal while the %-10g gives either fixed or exponential form */
    printf("|%10.3f|%10.3e|%-10g| \n", x, x, x);

    //calls the function
    return 0;
} 