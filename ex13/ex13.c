#include <stdio.h>

int main (int argc, char *argv[])
{
    for (int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };

    int numStates = 4;

    for (int i = 0; i < numStates; i++) {
        printf("State %d: %s\n", i, states[i]);
    }

    return 0;
}

