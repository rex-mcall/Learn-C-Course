#include <stdio.h>

int main (int argc, char *argv[])
{
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    int count = sizeof(ages) / sizeof(int);

    //first way, using indexing
    for (int i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    //set these pointers to the start of the arrays
    int *curAge = ages; //pointer to an int
    char **curName = names; //pointer to a pointer to a char

    for (int i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(curName + i), *(curAge + i));
    }

    printf("---\n");

    //third way, pointers are just arrays
    for (int i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", curName[i], curAge[i]);
    }

    printf("---\n");

    //fourth way, in a stupid overly complicated way
    for (curAge = ages, curName = names; (curAge - ages) < count; curName++, curAge++) {
        printf("%s has lived %d years so far.\n", *curName, *curAge);
    }

    return 0;
}