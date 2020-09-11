#include <stdio.h>

int main(void)
{
    int size;
    printf("What's the length of your name? \n"); //askiing the question
    scanf("%d", &size);                           //input the integer value
    
    printf("Your name's length is %d. \n", size); //printing the output after concatenation

    //**C does not have any datatype for strings: collection of characters**//
    
    /* 
    The way around that is to use an array of characters as a string of a definite size. 
    Input the characters using loops and output using loops.
    */
   
   //or

   /*
   Use scanf with %s and &name as shown below
   */
    
    char name[size];
    printf("What's your name?\n");
   
    //another way to input reading first name
    scanf("%s", &name);
    printf("Your name is %s.", name); 
    
    /*
    The problem here is if I give a size of 20 and has a length of the name < size, 
    it will wait until all the spaces are filled up........
    */
}