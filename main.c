#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Useage: fizzbuzz <number of iterations>\n");
        return 0;
    }
    
    for (int i=0; i<atoi(argv[1]); i++) {
        if (i % 3 == 0)
            printf("fizz");
        else {
            if (i % 5 == 0)
                printf("buzz");
            else {
                printf("%d\n", i);
                continue;
            }
            printf("\n");
            continue;
        }

        if (i % 5 == 0) 
            printf("buzz");

        printf("\n");
    }
}
