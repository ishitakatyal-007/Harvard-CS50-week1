#include <stdio.h>

int main(void)
{
    char ans;
    printf("Do you like APPLE?\n");
    scanf("%c", &ans);

    if(ans == 'Y' || ans == 'y')
    {
        printf("Good. I also like it.");
    }
    else if(ans == 'N' || ans == 'n')
    {
        printf("Bad. But I like it.");
    }
    else
    {
        printf("Input Ans is not in the dictionary.........So, sorry.");
    }
}