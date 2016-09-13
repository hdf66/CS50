#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("%d is not an accepted input", argc);
        return 1;
    }
    int key = atoi(argv[1]);
    if (key <= 1)
    {
        printf("%d is not an accepted input", key);
        return 1;
    }
    char* message = GetString();
    for (int i = 0, n = strlen(message); i < n; i++){
        
        if (isalpha(message[i])){
            
        
            if (isupper(message[i])){
                
                int message1 = (message[i] + key - 65) % 26 + 65;
                printf("%c", message1);
            }
            else{
                int message1 = (message[i] + key - 97) % 26 + 97;
                printf("%c", message1);
            }
        }
        else{
            printf("%c", message[i]);
        }
    }
    printf("\n");
}