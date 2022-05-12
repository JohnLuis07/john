#include <stdio.h>
#include <stdbool.h>
//I made it two to avoid confusion on assigning variables
//but can be fuse as 1.
#define row 8
#define col 8

int main(void)
{
    //initialize road_networks as a bool
    bool road_networks[row][col] = 
    {
        {1,1,0,0,0,1,0,0},
        {1,1,1,0,0,0,0,0},
        {0,1,1,0,1,1,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {1,0,1,0,0,1,0,0},
        {1,0,0,1,0,0,1,0},
        {0,0,0,0,0,1,0,1}
    };
    //for the points/destination of the matrix also initialize new_col_row as a character
    char new_col_row[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    //initialize loc as an integer
    int loc;
    //inserting the point/destinations in the matrix on column part
    for (int i = 0; i < col; i++)
    {
        if (i != 2 & i != 3)
        {
            printf("\t%c", new_col_row[i]);
        }
        else
        {
            printf("\t[%c]", new_col_row[i]);
        }
    }
    //prints the matrix
    for (int loop_row = 0; loop_row < row; loop_row ++)
    {
        printf("\n");
        //if else is for the insertion of points/destination in the matrix on the row part
        if (loop_row != 2 & loop_row != 3) {
            printf("%c", new_col_row[loop_row]);
        } else {
            printf("[%c]", new_col_row[loop_row]);
        }
        //creates the informative matrix
        for (int loop_col = 0; loop_col < col; loop_col++)
        {
            printf("\t%i", road_networks[loop_row][loop_col]);
        }
    }
    //user's input
    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &loc);
    //initial point
    printf("At point: %c\n", new_col_row[loc]);
    //shows the way to the nearest charging point
    for (int i = 0; i < row; i++)
    {
        if (loc == 2 || loc == 3)
        {
            break;
        }
        else if (loc == 7)
        {
            printf("Now at point: I\n");
            printf("Now at point: %c\n", new_col_row[7]);
            loc = 7;
            break;
        }
        else if(loc == 6)
        {
            printf("Now at point: %c\n", new_col_row[3]);
            loc = 3;
            break;
        }
        else if (road_networks[i][loc] == 1)
        {
            if(loc == i)
            {
                continue;
            }
            else
            loc = i;
            printf("Now at point: %c\n", new_col_row[i]);
        }
    }

    //prints where are your final destination.
    printf("Point: %c arrived to charging station", new_col_row[loc]);
    return 0;

    
}