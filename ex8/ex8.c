#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("You only have %d argument. It was the default argument: %s.\n", argc, argv[0]);
    }
    else if (argc > 1 && argc <= 3)
    {
        printf("Here are your arguments:\n");
        for (int i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    else
    {
        printf("Too many arguments.\n");
    }

    return 0;
}