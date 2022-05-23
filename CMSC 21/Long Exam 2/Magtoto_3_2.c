#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

void scan_word(int occurences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int input, occurences1[26], occurences2[26];


int main(void)
{
    int letter[26] = {0};
    input = 1;
    printf("Enter first word: ");
    scan_word(letter);
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

bool is_anagram(int occurrences1[26], int occurrences2[26])
{
    int same = 1, i = 0;
    while(i < 26)
    {
        if(*(occurences1+i) != *(occurrences2+i))
        {
            same = 0;
            return false;
        }
        i++;
    }
    return true;
}