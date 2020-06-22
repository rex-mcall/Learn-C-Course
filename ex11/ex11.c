#include <stdio.h>

int main (int argc, char * argv[])
{
    int numbers[4] = { 0 };
    char name[4] = { 'a' };

    //print out the raw contents of the arrays
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("character array: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    printf("character array as string: %s\n", name);

    //setup the numbers array
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    //setup the name array
    name[0] = 'R';
    name[1] = 'e';
    name[2] = 'x';
    name[3] = '\0'; //null terminator - very important!

    printf("numbers post initialization: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name character array post initialization: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    printf("name array as a string: %s\n", name);

    //I still don't know what the * does, but this line was in the course as an example
    char *another = "Rex";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %C\n", another[0], another[1], another[2], another[3]);

    return 0;
}