#include <stdio.h>
void floats()
{
    float degree;
    double tspSalt;
    long double sunHeat;

    degree = 34.5;
    tspSalt = 0.75;
    sunHeat = 123.234;

    printf("size of float: %ld \n", sizeof(degree));
    printf("size of double: %ld \n", sizeof(tspSalt));
    printf("size of long double: %ld \n", sizeof(sunHeat));    
    printf("value of degree: %f \n", degree);
    printf("value of tsp salp %f \n", tspSalt);
    printf("value of sun heat %Lf\n", sunHeat);
}