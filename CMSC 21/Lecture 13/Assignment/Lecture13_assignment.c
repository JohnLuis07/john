#include<stdio.h>
#include<math.h> //for pow and sqrt function

//initialize line as the structure
struct line
{
    //declare the data of line as a floar
    float x1;
    float x2;
    float y1;
    float y2;
    float midpoint_1, midpoint_2;
    float slope;
    float distance;
};
int main()
{
    float b;
    // declare res as the structure member
    struct line res;
    printf("Enter x and y for point 1: ");
    scanf("%f %f", &res.x1, &res.y1);
    printf("Enter x and y for point 2: ");
    scanf("%f %f", &res.x2, &res.y2);
    //solves the midpoint
    res.midpoint_1 = (res.x1 + res.x2)/2; 
    res.midpoint_2 = (res.y1 + res.y2)/2;
    //solves the slope
    res.slope = (res.y1 - res.y2)/(res.x1 - res.x2);
    //solves the distance
    res.distance = sqrt(pow((res.x1 - res.x2), 2) + pow((res.y1 - res.y2), 2));
    //find the letter b in the slope intercept form
    b = res.y1 - (res.slope*res.x1);

    //prints the results
    printf("The slope is: %f", res.slope);
    printf("\nMidpoint: %f, %f", res.midpoint_1, res.midpoint_2);
    printf("\nDistance between 2 points: %f", res.distance);
    printf("\ny = %fx + (%f)", res.slope, b);
    return 0;
}