/*Prints a one month reminder list*/

#include <stdio.h>
#include <string.h> //for strings function

#define MAX_REMIND 50 //maximum number of reminders
#define MSG_LEN 60 //maximum length of reminder messages
//declares the function
int read_line(char str[], int n);

int main(void){
    //declaration of every variables into char
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    char day, i, j, num_remind = 0;

    for(;;){
        //informs the user that he/she reach the maximum inputs
        if(num_remind == MAX_REMIND){
            printf("--No space left --\n");
            break;
        }
        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if(day == 0){
            break;
        }
        //makes the variable day back to string
        sprintf(day_str, "%2d", day);
        //calls the function
        read_line(msg_str, MSG_LEN);
        //alligns the day and reminders correctly
        for(i = 0; i < num_remind; i++){
            if(strcmp(day_str, reminders[j - 1]));
        }

        for(j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]);
        }
        //combines the day and reminders
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }
    //prints the result, the day and the reminder
    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++){
        printf("%s\n", reminders[i]);
    }

    return 0;
}

//read and the process in reminder messages
int read_line(char str[], int n){
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}