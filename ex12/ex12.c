#include <stdio.h>

int main (int argc, char *argv[])
{
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Rex";
    char fullName[] = { 'R', 'e', 'x',
                        ' ', 'E', '.', ' ',
                        'M', 'c', 'A', 'l', 'l', 'i', 's', 't', 'e', 'r', '\0'
                      };

    printf("This is the size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in areas[]: %ld\n", sizeof(areas) / sizeof(int));

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars in name[]: %ld\n", sizeof(name) / sizeof(char));

    printf("the size of fullName (char[]): %ld\n", sizeof(fullName) / sizeof(char));

    printf("Name = \"%s\" and fullName = \"%s\"\n", name, fullName);

    return 0;
}