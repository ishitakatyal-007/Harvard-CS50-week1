#include <stdio.h>
#include <math.h>

int main(void)
{
    float num1, num2;
    int choice;
    printf("Use the choice number to indicate the\ntype of operation you want.\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exponential Power\n");
    scanf("%d", &choice);
    printf("Enter the two integers-\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    
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
        float ans = pow(num1, num2);
        printf("The answer is: %f", ans);
    }
    else
    {
        printf("The choice is out of bounds for the program..... So Sorry!");
    }
    
}