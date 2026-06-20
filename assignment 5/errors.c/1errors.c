#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {80,90,70,60,50}// Missing semicolon

    printf("Student Marks System\n");

    int total = 0;

    for(int i=0;i<=5;i++)// Loop goes out of bounds ie i cannot be equal to 5
    {                       // replace <= with < to fix the error
        total += marks[i];
    }

    printf("Total = %d\n", total);

    float average;

    average = total / 5;

    printf("Average = %d\n", average);// Average is a float variable but %d is used to print it, change it to %f to fix the error

    printf("\n");

    int scores[5];// there are only 5 elements in the scores array but we are trying to access the 6th element which is out of bounds, change scores[5] to scores[6] to fix the error

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;
    scores[5] = 60;

    printf("Scores\n");

    for(int i=0;i<5;i++)// i<6
    {
        printf("%d ", scores[i]);
    }

    printf("\n");

    char subject[5];//array out of bounds replace 5 by 15

    strcpy(subject,"Programming");

    printf("%s\n", subject);

    printf("\n");

    int attendance[5];

    attendance["one"] = 1;// Array index should be an integer, not a string. Change "one" to 1 to fix the error

    attendance[2.5] = 1;// Array index should be an integer, not a float. Change 2.5 to 2 to fix the error

    for(int i=0;i<5;i++)
    {
        attendance[i] = i;
    }

    printf("\nAttendance\n");

    for(int i=0;i<=5;i++)// Loop goes out of bounds ie i cannot be equal to 5
    {
        printf("%d ", attendance[i]);
    }

    printf("\n");

    int arr[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d", arr[i]);// missing &
    }

    printf("\n");

    int totalMarks = 0;

    for(int i=0;i<5;i++)
    {
        totalMarks += arr[i];
    }

    printf("Total Marks = %d\n", totalMarks);

    char grade[5];//replace 5 by 2

    grade[0] = "A";// "A" is treated as a string assign 'A' insted which is a char
    grade[1] = '+';

    printf("%s\n", grade);

    printf("\n");

    int prices[5] = {100,200,300,400,500};

    if(prices[2] = 300)//use == for comparison instead of = which is an assignment operator, change it to if(prices[2] == 300) to fix the error
    {
        printf("Price Found\n");
    }

    printf("\n");

    int inventory[5];

    inventory = prices;//prices variable is an array and we cannot assign one array to another, we need to copy the elements of prices array to inventory array using a loop to fix the error
                        // replace inventory = prices with int inventory[5]; for(int i=0;i<5;i++) { inventory[i] = prices[i]; }
    printf("%d\n", inventory[0]);

    printf("\n");

    float salary[5];

    salary[0] = 50000.50;

    printf("%d\n", salary[0]);//use %f instead of %d to print a float variable.

    printf("\n");

    char city[10];

    city = "Jaipur";

    printf("%s\n", city);//use strcpy to assign a string to a character array.

    printf("\n");

    int result[5];

    for(int i=0;i<=5;i++)// Loop goes out of bounds ie i cannot be equal to 5, replace <= with < to fix the error
    {
        result[i] = i * 10;
    }

    printf("Results\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    printf("Program Finished\n");

    return 0;
}