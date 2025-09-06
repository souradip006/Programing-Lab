#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int toss;
    srand(time(0));
    toss = rand() % 2;
    if (toss == 0) {
        printf("It's Head!\n");
    }
    if (toss == 1) {
        printf("It's Tail!\n");
    }

    return 0;
}
