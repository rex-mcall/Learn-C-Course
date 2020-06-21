#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double superPower = 56789.4532;
    char initial = 'E';
    char firstName[] = "Rex";
    char lastName[] = "McAllister";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of poer.\n", power);
    printf("You have %f awesome super powers.\n", superPower);
    printf("I have an initial %c.\n", initial);
    printf("My last name is %s.\n", lastName);
    printf("My first name is %s.\n", firstName);
    printf("My full name is %s %c %s.\n", firstName, initial, lastName);

    int bugs = 100;
    double bugRate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bugRate);

    long universeOfDefects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universeOfDefects);

    double expectedBugs = bugs * bugRate;
    printf("You are expected to have %f bugs.\n", expectedBugs);

    double partOfUniverse = expectedBugs / universeOfDefects;
    printf("That is only %e portion of the universe.\n", partOfUniverse);

    //this makes no sense, just a demo of weird stuff
    char nul_byte = '\0';
    int carePercentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", carePercentage, nul_byte, nul_byte);

    return 0;
}