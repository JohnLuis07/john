#include <stdio.h>

C:\Users\admin\Desktop\UP Class 2nd sem\CMSC 21\test\test.cbpint main(void)
{
    int numl, denoml, num2, denom2, result_num, result_denom;
    printf("Enter first fraction: ");
    scanf("%d/%d", &numl, &denoml);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = numl * denom2 + num2 * denoml;
    result_denom = denoml * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}


