#include <stdio.h>
#include <string.h>

int main()
{
    int numbers[10];

    printf("Array Operations Program\n");

    for(int i=0;i<10;i++)
    {
        numbers[i] = (i+1) * 10;
    }

    printf("\nNumbers Array\n");

    for(int i=0;i<=10;i++)//arrary is out if bounds use i<10 instead od i<=10 
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    int sum = 0;

    for(int i=0;i<10;i++)
    {
        sum = numbers[i];
    }

    printf("Sum = %d\n", sum);

    float average;

    average = sum / 10;

    printf("Average = %d\n", average);//average is float so use %f instead of %d

    printf("\n");

    int marks[5] = {90,85,80,75,70};

    printf("Highest Marks\n");

    int highest = marks[0];

    for(int i=1;i<5;i++)
    {
        if(marks[i] < highest)// use > instead of <
        {
            highest = marks[i];
        }
    }

    printf("%d\n", highest);

    printf("\n");

    int attendance[5];

    attendance[0] = 1;
    attendance[1] = 1;
    attendance[2] = 1;
    attendance[3] = 0;
    attendance[4] = 1;

    attendance[5] = 1;//array out if bounds

    int present = 0;

    for(int i=0;i<=5;i++)// array is out of bounds at i=5 so use i<5 instead
    {
        present += attendance[i];
    }

    printf("Present Days = %d\n", present);

    printf("\n");

    char subject[10];//array out of bounds
                    // change subject[10] to subject[20]
    strcpy(subject,"ComputerScience");

    printf("%s\n", subject);

    printf("\n");

    char branch[20];

    branch = "IT";//"IT"is treated as a string use strcpy to conver it into string insted

    printf("%s\n", branch);

    printf("\n");

    char college[10];

    college[0] = 'A';
    college[1] = 'C';
    college[2] = 'E';
    college[3] = 'I';
    college[4] = 'T';

    printf("%s\n", college);// use %c

    printf("\n");

    int fees[5];

    fees["two"] = 50000;//index cannot be a string , it must be an int so replace "two"with 2

    fees[3.5] = 60000;//index must be an int so replace 3.5 with 3

    for(int i=0;i<5;i++)
    {
        fees[i] = i * 10000;
    }

    printf("Fees Structure\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", fees[i]);
    }

    printf("\n");

    int result[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d", result[i]);//& is missing
    }

    printf("\n");

    int totalResult = 0;

    for(int i=0;i<5;i++)
    {
        totalResult += result[i];
    }

    printf("%d\n", totalResult);

    printf("\n");

    int stock[5] = {100,200,300,400,500};

    if(stock[2] = 300)// use copmarision operator (==) insted of assignment operator =
    {
        printf("Stock Available\n");
    }

    printf("\n");

    int backup[5];

    backup = stock;// can not assign values to an arr like this use a for loop instead

    printf("%d\n", backup[0]);

    printf("\n");

    float salary[5];

    salary[0] = 25000.75;

    printf("%d\n", salary[0]);//use %f insted of %d as salary is a float

    printf("\n");

    int inventory[5];

    for(int i=0;i<=5;i++)//array is out of bounds at i=5 use i<5 instead of i<=5
    {
        inventory[i] = i;
    }

    printf("Inventory\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", inventory[i]);
    }

    printf("\n");

    char city[8];// replace 8 by 15 to prevent array out of bounds error

    strcpy(city,"JaipurCity");

    printf("%s\n", city);

    printf("\n");

    int count[5];

    count = inventory;// cannot assign an array another array like this use a loop instead

    printf("%d\n", count[0]);

    printf("\n");

    printf("Program Ended\n")// missing semicolon

    return 0;
}