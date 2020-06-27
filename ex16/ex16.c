#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char *name;
    int age;
    int height;
    int weight;
};

struct person *person_create(char *name, int age, int height, int weight) {
    struct person *who = malloc(sizeof(struct person));

    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void person_destroy(struct person *who) {
    assert(who != NULL);

    free(who->name);
    free(who);
}

void person_print(struct person *who) {
    printf("name: %s\n", who->name);
    printf("\tAge: %d\n", who-> age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]) {
    struct person *joe = person_create("Joe", 32, 64, 140);

    struct person *frank = person_create("Frank", 20, 72, 180);

    printf("Joe is at memory location %p:\n", joe);
    person_print(joe);
    printf("Frank is at memory location %p:\n", frank);
    person_print(frank);

    joe->age += 20;
    frank->age += 20;

    person_print(joe);
    person_print(frank);

    person_destroy(joe);
    person_destroy(frank);

    struct person *Rex = person_create("Rex", 16, 70, 150);
    person_print(Rex);
    person_destroy(Rex);
    
    return 0;
}