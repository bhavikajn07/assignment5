#include <stdio.h>
#include <string.h>

int main()
{
    int sales[5] = {100,200,300,400,500};

    printf("Sales Report System\n");

    int totalSales = 0;

    for(int i=0;i<5;i++)
    {
        totalSales += sales[i];
    }

    printf("Total Sales = %d\n", totalSales);

    float averageSales;

    averageSales = totalSales / 5;

    printf("Average Sales = %d\n", averageSales);//use %f instead of %d

    printf("\n");

    int highestSale = sales[0];// use sales[4]

    for(int i=1;i<5;i++)
    {
        if(sales[i] < highestSale)// use > insted of<
        {
            highestSale = sales[i];
        }
    }

    printf("Highest Sale = %d\n", highestSale);

    printf("\n");

    int monthlySales[5];

    monthlySales[0] = 120;
    monthlySales[1] = 140;
    monthlySales[2] = 160;
    monthlySales[3] = 180;
    monthlySales[4] = 200;

    monthlySales[5] = 250;// array out of bounds 

    printf("Monthly Sales\n");

    for(int i=0;i<=5;i++)// use i < 5 to prevent array out of bounds error
    {
        printf("%d ", monthlySales[i]);
    }

    printf("\n");

    char product[8];// replace 8 with 15 to prevent  array out of bounda error

    strcpy(product,"LaptopComputer");

    printf("%s\n", product);

    printf("\n");

    char category[15];

    category = "Electronics";// use strcpy to assign a string to an array

    printf("%s\n", category);

    printf("\n");

    int stock[5];

    stock["first"] = 100;// indwx must be an it

    stock[2.7] = 200;//index musr ab an int

    for(int i=0;i<5;i++)
    {
        stock[i] = i * 50;
    }

    printf("Stock Details\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", stock[i]);
    }

    printf("\n");

    int orders[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d", orders[i]);//missing &
    }

    printf("\n");

    int totalOrders = 0;

    for(int i=0;i<5;i++)
    {
        totalOrders += orders[i];
    }

    printf("Total Orders = %d\n", totalOrders);

    printf("\n");

    int revenue[5] = {1000,2000,3000,4000,5000};

    if(revenue[2] = 3000)
    {
        printf("Revenue Matched\n");
    }

    printf("\n");

    int backupRevenue[5];

    backupRevenue = revenue;//use for loop to assign values

    printf("%d\n", backupRevenue[0]);

    printf("\n");

    float commission[5];

    commission[0] = 2500.50;

    printf("%d\n", commission[0]);//use %f

    printf("\n");

    char city[10];

    city = "Jaipur";//use strcpy to assign as string to an array

    printf("%s\n", city);

    printf("\n");

    char branch[5];//replace 5 by 4

    branch[0] = 'I';
    branch[1] = 'T';
    branch[2] = '-';
    branch[3] = 'A';

    printf("%s\n", branch);

    printf("\n");

    int employees[5];

    for(int i=0;i<=5;i++)//use i<5 instead of i<=5
    {
        employees[i] = i * 100;
    }

    printf("Employees\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ", employees[i]);
    }

    printf("\n");

    char department[6];//array out of bounds replace 6 by 10

    strcpy(department,"Marketing");

    printf("%s\n", department);

    printf("\n");

    int expenses[5];

    expenses = sales;//use for loop to assign array

    printf("%d\n", expenses[0]);

    printf("\n");

    int ratings[5];

    ratings[-1] = 5;//no negetiv indexing

    printf("%d\n", ratings[0]);

    printf("\n");

    int feedback[5];

    feedback[0] = 10;
    feedback[1] = 20;
    feedback[2] = 30;
    feedback[3] = 40;
    feedback[4] = 50;

    printf("%s\n", feedback[0]);//use %d

    printf("\n");

    printf("Report Generated Successfully\n")//missing semicolon

    return 0;
}