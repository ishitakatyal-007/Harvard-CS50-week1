#include <stdio.h>
#include <math.h>

int main(void)
{
    int num1, num2, choice;
    printf("Use the choice number to indicate the\ntype of operation you want.\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo remainder\n6. Exponential Power\n");
    scanf("%d", &choice);
    printf("Enter the two integers-\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if(choice == 1)
    {
        printf("The sum is: %d", num1 + num2);
    }
    if(choice == 2)
    {
        printf("The difference is: %d", num1 - num2);
    }
    if(choice == 3)
    {
        printf("The product is: %d", num1 * num2);
    }
    if(choice == 4)
    {
        printf("The quotient is: %d", num1 / num2);
    }
    if(choice == 5)
    {
        printf("The remainder is: %d", num1 % num2);
    }
    if(choice == 6)
    {
        int ans = pow(num1, num2);
        printf("The answer is: %d", ans);
    }
    else
    {
        printf("The choice is out of bounds for the program..... So Sorry!");
    }
    
}