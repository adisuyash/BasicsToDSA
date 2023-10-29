// Celcius to Fahrenheit Temperature Conversion

#include <stdio.h>

int main()
{
    float celcius, fahrenheit;

    printf("Enter the temperature in Celcius:");
    scanf("%f", &celcius);

    // Temperature Conversion
    fahrenheit = 9.0 / 5 * celcius + 32;

    printf("Temperature in fahrenheit : %0.2f", fahrenheit);
    return 0;
}