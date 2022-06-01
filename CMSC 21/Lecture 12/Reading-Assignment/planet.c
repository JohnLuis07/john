/* Checks planet names */

#include<stdio.h> 
#include<string.h> //for the string functions

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    /*a character array which contains the 9 planets in order*/
    char *planets[] = {"Mercury", "Venus", "Earth",
                        "Mars", "Jupiter", "Satutn",
                        "Uranus", "Neptune", "Pluto"};
    //variables for iteration
    int i, j;
    //for the input
    for (i = 1; i < argc; i++){
        //enumerate the planets
        for (j = 0; j < NUM_PLANETS; j++){
            //checkers for the input if the word is in the array
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        //inform the user if the input is not in the array
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);

    }

    return 0; 
}