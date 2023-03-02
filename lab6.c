#include<stdio.h>
void selection_sort();

int main()
{
    int length;
    printf("Enter the length of an array: ");
    scanf("%d", &length);
    int array[length];
    printf("Enter only %d numbers\n", length);
    for(int i = 0; i < length; i++)
    {
        printf("Input here: ");
        scanf("%d", &array[i]);
    }
    printf("\nSorted: ");
    selection_sort(array, length);
    return 0;
}
void selection_sort(int array[], int len)
{
    int min_ind, temp;
    for(int i = 0; i<len - 1; i++)
    {
        min_ind = i;
        for (int j = i + 1; j < len; j++)
        {
            if (array[min_ind] > array[j])
            {
                min_ind = j;            
            }
        }
        
        temp = array[i];
        array[i] = array[min_ind];
        array[min_ind] = temp;

    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    
} 