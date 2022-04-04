#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for name
    string name = get_string("What is your name?\n");

    //print out name
    printf("Hello, %s!\n", name);
}
