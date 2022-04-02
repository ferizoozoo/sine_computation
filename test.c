#include "sine.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char *res;
    double angle = strtod(argv[1], &res);

    int n = atoi(argv[2]);

    printf("%f", sin_taylor_series_to_n_terms(angle, n));
}