#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Created by elliotc on 19/10/2026.
//
int main(int argc, char *argv[]) {
    long size = 50;
    if (argc == 2) {
        size = strtol(argv[1],NULL,10);
    }
    char *x = malloc(size*sizeof(char));

    strcpy(x, "");

    for (int i = 0; i < size; i++) {
        strcat(x, "h");
        printf("%s\n", x);


    }
    free(x);

    return 0;
}