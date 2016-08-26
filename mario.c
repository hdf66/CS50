#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("ITSA ME! How tall is my obstacle?\n");
    int n;
    do
    {
        printf("How tall is my obstacle?\n");
        n = GetInt();
    } while (n > 23 || n < 0);
    for (int i = 0; i < n; i++)
    {
        for (int h = 0; h < n-i-1; h++)
        {
            printf(" ");
        }
        for (int j = 0; j < i+2; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}