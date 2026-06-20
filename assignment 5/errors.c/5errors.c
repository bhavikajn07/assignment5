#include <stdio.h>
#include <string.h>

int main()
{
    int marks[10] = {75,80,85,90,95,70,65,88,92,78};

    printf("Student Performance Analysis\n");

    int total = 0;

    for(int i=0;i<10;i++)
    {
        total += marks[i];
    }

    printf("Total Marks = %d\n", total);

    float average;

    average = total / 10;

    printf("Average = %d\n", average);//use %d

    printf("\n");

    int highest = marks[0];// uce marks[4]

    for(int i=1;i<10;i++)
    {
        if(marks[i] < highest)//use > instead of<
        {
            highest = marks[i];
        }
    }

    printf("Highest = %d\n", highest);

    printf("\n");

    int lowest = marks[0];//marks[6]

    for(int i=1;i<10;i++)
    {
        if(marks[i] > lowest)//use < instead of>
        {
            lowest = marks[i];
        }
    }

    printf("Lowest = %d\n", lowest);

    printf("\n");

    int attendance[10];

    for(int i=0;i<10;i++)
    {
        attendance[i] = 1;
    }

    attendance[10] = 0;//array out of bounds at 10

    int present = 0;

    for(int i=0;i<=10;i++)//use i<10 instead of i<=10
    {
        present += attendance[i];
    }

    printf("Present Days = %d\n", present);

    printf("\n");

    char subject[10];// replace 10 with 15 to prevent array out of bounds error

    strcpy(subject,"DataStructures");

    printf("%s\n", subject);

    printf("\n");

    char department[20];// replace 20 with 22 to prevent array out of bounds error

    department = "InformationTechnology";//use strcpt to assign a str to an array

    printf("%s\n", department);

    printf("\n");

    int fees[5];

    fees["two"] = 50000;//index must be an int

    fees[4.5] = 70000;//index must be an int

    for(int i=0;i<5;i++)
    {
        fees[i] = i * 10000;
    }

    printf("Fees\n");

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

    int inventory[5] = {10,20,30,40,50};

    if(inventory[2] = 30)// use comparision operator == instead of assignment operator =
    {
        printf("Item Found\n");
    }

    printf("\n");

    int backup[5];

    backup = inventory;//use for loop to assign an array

    printf("%d\n", backup[0]);

    printf("\n");

    float salary[5];

    salary[0] = 65000.75;

    printf("%d\n", salary[0]);//use %f instead of %d

    printf("\n");

    char city[10];

    city = "Jaipur";//use strcpt to assign a str to an array

    printf("%s\n", city);

    printf("\n");

    char branch[5];//replace 5 with 4

    branch[0] = 'I';
    branch[1] = 'T';
    branch[2] = '-';
    branch[3] = 'A';

    printf("%s\n", branch);

    printf("\n");

    int stock[5];

    for(int i=0;i<=5;i++)//use i<5 instead of i<=5 to prevent array out of bounds error
    {
        stock[i] = i * 100;
    }

    printf("Stock\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", stock[i]);
    }

    printf("\n");

    char course[8];// replace 8 with 12 to prevent array out of bounds error

    strcpy(course,"Programming");

    printf("%s\n", course);

    printf("\n");

    int ratings[5];

    ratings[-1] = 10;// negetive indexing causes error

    printf("%d\n", ratings[0]);

    printf("\n");

    int feedback[5] = {1,2,3,4,5};

    printf("%s\n", feedback[0]);//use %d instead of %s

    printf("\n");

    int scores[5];

    scores = marks;//use for loop to assign values to an array

    printf("%d\n", scores[0]);

    printf("\n");

    int temp[5];

    for(int i=0;i<5;i++)
    {
        temp[i] = i;
    }

    printf("%d\n", temp[5]);//replace 5 by 4 to prevent array out of bounds error

    printf("\n");

    printf("Program Completed Successfully\n");

    return 0;
}