#include <stdio.h>

int main (int argc, char * argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        return 1; //program abort
    }

    for (int i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        switch (letter) {
            case 'a': //intentional fallthrough
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e': //intentional fallthrough
            case 'E':
                printf("%d: 'E'\n", i);
                break;
            
            case 'i': //intentional fallthrough
            case 'I':
                printf("%d: 'I'\n", i);
                break;

            case 'o': //intentional fallthrough
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u': //intentional fallthrough
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y': //intentional fallthrough
            case 'Y':
                if (i > 2) {
                    //it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }
                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}