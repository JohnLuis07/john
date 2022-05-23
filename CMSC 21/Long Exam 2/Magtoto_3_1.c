#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

//declare function prototype
void scan_word(int occurences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);
//declare global variables
int input, occurences1[26], occurences2[26];


int main(void)
{
    //main function that calls the other functions
    int letter[26] = {0};
    //for the word 1
    input = 1;
    printf("Enter first word: ");
    scan_word(letter);
    //for the word 2
    input = 2;
    printf("Enter second word: ");
    scan_word(letter);

    if(is_anagram(occurences1, occurences2))
    {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}
//examines the letters of the two words
void scan_word(int occurences[26])
{
    char c;

    while ((c = getchar()) != '\n')
    {
        if(isalpha(c))
        {
            if(input==1)
            {
            occurences1[toupper(c) - 'A']++;
            }
            else if(input==2)
            {
            occurences2[toupper(c) - 'A']++;
            }
        }
    }
}
//check the two words if they are anagram or not
bool is_anagram(int occurrences1[26], int occurrences2[26])
{
    int same = 1, i = 0;
    while(i < 26)
    {
        if(occurences1[i] != occurrences2[i])
        {
            same = 0;
            return false;
        }
        i++;
    }
    return true;
}