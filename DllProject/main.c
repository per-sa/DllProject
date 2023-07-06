#include<stdio.h>
#include <math.h>
#include "main.h"//include dll header file



void isValidTriangle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid parameters");
    }
}

double triangleType(double a, double b, double c) {
    isValidTriangle(a, b, c);
    double areaResult;

    if (a == b && b == c)
    {
        areaResult = sqrt(3) / 4 * a * a;
        printf("O triângulo é equilátero. Area: %.2f", areaResult);
    }
    else if (a == b && a == c && b != a && b != c)
    {
        double p = (a + b + c) / 2;
        areaResult = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("O triângulo é isósceles. Area: %.2f", areaResult);
    }
    else
    {
        double p = (a + b + c) / 2;
        areaResult = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("O triângulo é escaleno. Area: %.2f", areaResult);
    }
}

float circleArea(float radius) {
    if (radius <= 0) {
        printf("Invalid radius");
    }
    else {
        return 3.14 * (radius * radius);
    }
}
