#include<stdio.h>
int main()
{
    int i, days, start_day;
    printf("Enter number of days in month: ");
    scanf("%d",&days);
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&start_day);

    if(days < 28 || days > 31)
    {
        printf("Invalid input please try again from the start.");
        return 0;
    }
    else
        for(i=1;i<start_day;i++)
            printf("   ");

        for(i = 1;i <= days;i++)
        {
            printf("%3d",i);
            if((start_day + i - 1) % 7==0)
            {  
                printf("\n");
            }    
        }
    return 0;
}