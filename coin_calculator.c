#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float cash;
    int cents, coins;
    coins = 0; 
    do
    {
        cash = get_float("How much change are you owed? ");
        cents = round(cash * 100); //rounds the dollar value supplied to the nearest cent 
    }
    while (cents < 0);
    {
        while (cents >= 25)
        {
            cents = cents - 25;
            coins++;
        }
        while (cents >= 10)
        {
            cents = cents - 10;
            coins++;
        }
        while (cents >= 5)
        {
            cents = cents - 5;
            coins++;
        }
        while (cents >= 1)
        {
            cents = cents - 1;
            coins++;
        }
        printf("Number of coins used is: %i \n", coins);
        return 0;
    }
    return 0;
}