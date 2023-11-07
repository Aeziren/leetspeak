// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string orign);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s word", argv[0]);
        return 1;
    }
    printf("%s\n", replace(argv[1]));
}

string replace(string orign)
{
    for (int i = 0; i < strlen(orign); i++)
    {
        switch(orign[i])
        {
            case 'a' | 'A':
                printf("4");
                break;
            case 'e' | 'E':
                printf("3");
                break;
            case 'i' | 'I':
                printf("1");
                break;
            case 'o' | 'O':
                printf("0");
                break;
            default:
                printf("%c", orign[i]);
                break;
        }
    }
    return "";
}
