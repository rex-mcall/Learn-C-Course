#include <stdio.h>
#include <ctype.h>

//forward declarations, aka prototypes
int canPrintIt(char ch);
void printLetters(char arg[]);

void printArguments(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printLetters(argv[i]);
    }
}

void printLetters (char arg[]) {
    for (int i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        if (canPrintIt(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}

int canPrintIt (char ch) {
    return isalpha(ch) || isblank(ch);
}

int main (int argc, char *argv[])
{
    printArguments(argc, argv);
    return 0;
}