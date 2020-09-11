#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Enter the three numbers:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x>y && x>z)
    {
        printf("%d is the largest.", x);
    }
    else if(y>x && y>z)
    {
        printf("%d is the largest.", y);
    }    
    else
    {
        printf("%d is the largest.", z);
    }
}