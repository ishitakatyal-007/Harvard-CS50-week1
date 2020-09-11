#include <stdio.h>

int main(void)
{
    int total_iter;
    printf("Enter the total number of iterations:");
    scanf("%d", &total_iter);

    for(int i=0; i<total_iter; i++)
    {
        printf("This is the %dth iteration of the total iterations %d.\n", i, total_iter);
    }
}