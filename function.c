#include "function.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void makeDouble(char* a1, char* b1, double* a2, double* b2)
{
    char* endptr1 = NULL;
    char* endptr2 = NULL;
    *a2 = strtod(a1, &endptr1);
    *b2 = strtod(b1, &endptr2);
    if (*endptr1 != 0 || *endptr2 != 0) {
	printf("enter correct value\n");
	exit(0);
    }
}
void proof(int argc)
{
    if (argc != 4) {
	printf("enter the correct number of values");
	exit(0);
    }
}
void xyita(int argc, char* a1, char* b1)
{
    double a, b;
    proof(argc);
    makeDouble(a1, b1, &a, &b);
    if ((fabs(a) < EPSILON) && (fabs(b) < EPSILON)) {
	printf("x - any number\n");
    } else if ((fabs(a) < EPSILON) && (fabs(b) >= EPSILON)) {
	printf("no roots\n");
    } else if (fabs(a - b) < EPSILON) {
	printf("x = 1\n");
    } else {
	double x;
	x = -b / a;
	if (fabs(x) < EPSILON) {
	    x = 0;
	}
	if (fabs(x) == INFINITY) {
	    x = 322;
	}
	printf("x = %lf\n", x);
    }
}
