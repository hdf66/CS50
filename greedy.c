#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define Quarter 25;
#define Dime 10;
#define Nickel 5;

int main (void)
{
    float money = 0;
    int cents = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int remainder = 0;
    int coins = 0;
    
    do
    {
        printf("How much change do I owe you?\n");
        money = GetFloat();
        if(money == 0 || money < 0)
        printf("Needs to be greater than 0.\n");
    } 
    while(money <= 0);
    
    cents = (int)round(money*100);
    
    quarters = cents / Quarter;
    remainder = cents % Quarter;
    
    dimes = remainder / Dime;
    remainder = remainder % Dime;
    
    nickels = remainder / Nickel;
    remainder = remainder % Nickel;
    
    coins = quarters + dimes + nickels + remainder;
    
    printf("%d\n", coins);
    
    return 0;
}