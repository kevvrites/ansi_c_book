#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%7.0f %10.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
