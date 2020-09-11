#include <stdio.h>

int main(void)
{
    int ini_count, final_count;
    printf("Enter the initial position:\n");
    scanf("%d", &ini_count);

    printf("Enter the final position:\n");
    scanf("%d", &final_count);

    while(ini_count < final_count)
    {
        printf("This is the %d iteration out of %d iterations.\n", ini_count, final_count);
        ini_count++;
    }
}