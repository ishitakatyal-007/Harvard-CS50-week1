//favourite quote or a paragraph
#include <stdio.h>

int main(void)
{
    char quote[1000];
    printf("What's your fav quote?\n");
    gets(quote);
    printf("Your fav quote is: %s", quote);
}