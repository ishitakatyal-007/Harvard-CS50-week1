#include <stdio.h>

int main(void)
{
    float x, y;
    printf("Enter the two real numbers:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("The quotient is: %.50f", x/y);
    //limitation of hardwares comes into play at such a level. try x = 1, y = 10 
}