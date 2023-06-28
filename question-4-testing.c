int main(void)
{
    char taxCode = 'T';
    double price = 100.00;
    double taxRate = 0.05;

    if (taxCode == 'T')
    {
        price += price * taxRate;
    }

    printf("Price: %lf\n", price);

    //////////////////////////////////////////////////////////////////

    int opCode = 1;

    if (opCode == 1)
    {
        double x, y;
        scanf("%lf %lf", &x, &y);
        printf("Sum: %lf\n", x + y);
    }

    //////////////////////////////////////////////////////////////////

    int currentNumber = 5;
    printf("Current number: %d\n", currentNumber);

    if (currentNumber % 2 == 1)
    {
        currentNumber = 3 * currentNumber + 1;
    }
    else
    {
        currentNumber /= 2;
    }

    /////////////////////////////////////////////////////////////////

    int year = 2023;
    int leapYear;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        leapYear = 1;
    }

    printf("Leap year: %d\n", leapYear);

    //////////////////////////////////////////////////////////////////

    int distance = 1000;
    double cost = 10;

    if (distance <= 100)
    {
        cost = 5.00;
    }
    else if (distance <= 500)
    {
        cost = 8.00;
    }
    else if (distance < 1000)
    {
        cost = 10.00;
    }
    else
    {
        cost = 12.00;
    }

    printf("Cost: %lf\n", cost);

    return 0;
}