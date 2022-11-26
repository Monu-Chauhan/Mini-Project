#include <stdio.h>
void length()
{
    printf("1 Meter to centimeter : \n");
    printf("2 Meter to milimeter : \n");
    printf("3 Meter to micrometer : \n");
    printf("4 Meter to Nanometer : \n");
    printf("5 Centimeter to meter : \n");
    printf("6 Centimeter to milimeter : \n");
    printf("7 Centimeter to micrometer : \n");
    printf("8 Milimeter to meter : \n");
    printf("9 Milimeter to centimeter : \n");
    printf("10 Milimeter to micrometer : \n");
    printf("11 Foot to Centimeter\n");
    printf("12 Centimeter to Foot\n");
    printf("13 Foot to inch\n");
    printf("14 Inch to Foot\n");
    printf("15 Inch to centimeter\n");
    printf("16 Centimeter to Inch\n");
    int tempchoice;
    double value, output;
    printf("Enter choice :  \n");
    scanf("%d", &tempchoice);
    switch (tempchoice)
    {
    case 1:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 100;
        printf("%.3lf meter = %.3lf centimeter.\n", value, output);
        break;
    case 2:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000;
        printf("%.3lf meter = %.3lf milimeter.\n", value, output);
        break;
    case 3:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000000;
        printf("%.3lf meter = %.3lf micrometer.\n", value, output);
        break;
    case 4:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000000000;
        printf("%.3lf meter = %.3lf nanometer.\n", value, output);
        break;
    case 5:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 100;
        printf("%.3lf centimeter = %.3lf meter.\n", value, output);
        break;
    case 6:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 10;
        printf("%.3lf centimeter = %.3lf milimeter.\n", value, output);
        break;
    case 7:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 10000;
        printf("%.3lf centimeter = %.3lf micrometer.\n", value, output);
        break;
    case 8:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 1000;
        printf("%.3lf milimeter = %.3lf meter.\n", value, output);
        break;
    case 9:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 10;
        printf("%.3lf milimeter = %.3lf centimeter.\n", value, output);
        break;
    case 10:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000;
        printf("%.3lf milimeter = %.3lf micrometer.\n", value, output);
        break;
    case 11:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 30.48;
        printf("%.3lf Foot = %.3lf Centimeter.\n", value, output);
        break;
    case 12:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 30.48;
        printf("%.3lf Centimeter = %.3lf Foot.\n", value, output);
        break;
    case 13:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 12;
        printf("%.3lf Foot = %.3lf Inch.\n", value, output);
        break;
    case 14:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 12;
        printf("%.3lf Inch = %.3lf Foot.\n", value, output);
        break;
    case 15:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 2.54;
        printf("%.3lf Inch = %.3lf Centimeter.\n", value, output);
        break;
    case 16:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 2.54;
        printf("%.3lf Centimeter = %.3lf Inch.\n", value, output);
        break;

    default:
        printf("Enter Valid Input \n");
        break;
    }
}
void mass()
{
    printf("1 Kilogram to gram \n");
    printf("2 Kilogram to miligram \n");
    printf("3 Kilogram to microgram \n");
    printf("4 Gram to kilogram \n");
    printf("5 Gram to miligram \n");
    printf("6 Gram to microgram \n");
    printf("7 Kilogram to Ton \n");
    printf("8 Ton to Kilogram \n");
    printf("9 Kilogram to Megaton \n");
    printf("10 Megaton to Kilogram \n");
    int tempchoice;
    double value, output;
    printf("Enter choice :  \n");
    scanf("%d", &tempchoice);
    switch (tempchoice)
    {
    case 1:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000;
        printf("%.3lf Kilogram = %.3lf Gram.\n", value, output);
        break;
    case 2:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000000;
        printf("%.3lf Kilogram = %.3lf Miliram.\n", value, output);
        break;
    case 3:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000000000;
        printf("%.3lf Kilogram = %.3lf Microgram.\n", value, output);
        break;
    case 4:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 1000;
        printf("%.3lf Gram = %.3lf Kilogram.\n", value, output);
        break;
    case 5:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000;
        printf("%.3lf Gram = %.3lf Miligram.\n", value, output);
        break;
    case 6:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000000;
        printf("%.3lf Gram = %.3lf Microgram.\n", value, output);
        break;
    case 7:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 100;
        printf("%.3lf Kilogram = %.3lf Ton.\n", value, output);
        break;
    case 8:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 100;
        printf("%.3lf Ton = %.3lf Kilogram.\n", value, output);
        break;
    case 9:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 1000000000;
        printf("%.3lf Kilogram = %.3lf Megaton.\n", value, output);
        break;
    case 10:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000000000;
        printf("%.3lf Megaton = %.3lf Kilogram.\n", value, output);
        break;

    default:
        printf("Enter Valid Input \n");
        break;
    }
}
void time()
{
    printf("1 Hour to minutes \n");
    printf("2 Hour to seconds \n");
    printf("3 Hour to miliseconds \n");
    printf("4 Hour to microseconds \n");
    printf("5 Minutes to hours \n");
    printf("6 Minutes to seconds \n");
    printf("7 Minutes to miliseconds \n");
    printf("8 Minutes to microseconds \n");
    printf("9 Seconds to hours \n");
    printf("10 Seconds to minutes \n");
    printf("11 Seconds to miliseconds \n");
    printf("12 Seconds to microseconds \n");
    int tempchoice;
    double value, output;
    printf("Enter choice :  \n");
    scanf("%d", &tempchoice);
    switch (tempchoice)
    {
    case 1:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 60;
        printf("%.3lf Hours = %.3lf Minutes.\n", value, output);
        break;
    case 2:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 60 * 60;
        printf("%.3lf Hours = %.3lf Seconds.\n", value, output);
        break;
    case 3:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 60 * 60 * 1000;
        printf("%.3lf Hours = %.3lf Miliseconds.\n", value, output);
        break;
    case 4:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 60 * 60 * 1000000;
        printf("%.3lf Hours = %.3lf Microseconds.\n", value, output);
        break;
    case 5:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 60;
        printf("%.3lf Minutes = %.3lf Hours.\n", value, output);
        break;
    case 6:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 60;
        printf("%.3lf Minutes = %.3lf Seconds.\n", value, output);
        break;
    case 7:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 60 * 1000;
        printf("%.3lf Minutes = %.3lf Miliseconds.\n", value, output);
        break;
    case 8:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 60 * 1000000;
        printf("%.3lf Minutes = %.3lf Microseconds.\n", value, output);
        break;
    case 9:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 3600;
        printf("%.3lf Seconds = %.3lf Hours.\n", value, output);
        break;
    case 10:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value / 60;
        printf("%.3lf Seconds = %.3lf Minutes.\n", value, output);
        break;
    case 11:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000;
        printf("%.3lf Seconds = %.3lf Miliseconds.\n", value, output);
        break;
    case 12:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value * 1000000;
        printf("%.3lf Seconds = %.3lf Microseconds.\n", value, output);
        break;

    default:
        printf("Enter valid Input \n");
        break;
    }
}
void Tempreture()
{
    printf("1 Celcius to Fahrenheit\n");
    printf("2 Fahrenheit to Celcius\n");
    printf("3 Celcius to Kelvin.\n");
    int tempchoice;
    double value, output;
    printf("Enter choice :  \n");
    scanf("%d", &tempchoice);
    switch (tempchoice)
    {
    case 1:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = (9 * value) / 5 + 32;
        printf("%.3lf Celcius = %.3lf Fahrenheit.\n", value, output);
        break;
    case 2:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = (5 * (value - 32)) / 9;
        printf("%.3lf Fahrenheit = %.3lf Celcius.\n", value, output);
        break;
    case 3:
        printf("Enter value : \n");
        scanf("%lf", &value);
        output = value + 273;
        printf("%.3lf Fahrenheit = %.3lf Celcius.\n", value, output);
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
}
int main()
{
    printf("1 Lenght: \n");
    printf("2 Mass: \n");
    printf("3 Time: \n");
    printf("4 tempreture: \n");
    int choice;
    printf("Enter choice : \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        length();
        break;
    case 2:
        mass();
        break;
    case 3:
        time();
        break;
    case 4:
        Tempreture();
        break;
    default:
        printf("Enter Valid Input\n");
        break;
    }
}