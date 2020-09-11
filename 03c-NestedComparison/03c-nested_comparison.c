#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter the two numbers: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y)
    {
        printf("%d is greater.", x);
    }
    else
    {
        if(x == y)
        {
            printf("They are equal.");
        }
        else
        {
            printf("%d is greater.", y);
        }
        
    }
    
}