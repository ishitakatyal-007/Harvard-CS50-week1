#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    int result, i=0;
    do
    {
        result = pow(2, i);
        printf("%d\n", result);
        Sleep(1000);
        i++;
    }
    while(0<1 && result>-1);
}