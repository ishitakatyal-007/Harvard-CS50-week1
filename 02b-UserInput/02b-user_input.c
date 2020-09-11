/*
    The problem here is if I give a size of 20 and has a length of the name < size, 
    it will wait until all the spaces are filled up........
*/
#include <stdio.h>

int main(void)
{
    char name[100];
    printf("What's your name?\n");   

    //reading spaces too
    gets(name);
    printf("Your name is %s.", name);    


}