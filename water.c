#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    printf("How long are the showers you take? (In Minutes)\n");
    int i = GetInt();
    printf("Minutes: %i\n", i);
    printf("That means you are using %i bottle(s) of water!", i*12);
    
}