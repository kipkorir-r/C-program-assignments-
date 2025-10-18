#include <stdio.h>   // Include standard input/output library for printf() and scanf()

float convertToCelsius(float fahrenheit);// Function prototype (declaration)

int main()
 {
    float fahrenheit;// Variable to store the temperature in Fahrenheit
    float celsius;// Variable to store the converted temperature in Celsius

    //user to enter temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);// Read input 

    // Call the convertToCelsius function 
    celsius = convertToCelsius(fahrenheit);

    // Display the temperature in Celsius (2 decimal places)
    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0; 
 }

// Function definition
float convertToCelsius(float fahrenheit) {
    float celsius;// Variable to hold the converted temperature

    celsius = (fahrenheit - 32) * (5.0 / 9.0);// Conversion

    return celsius;
}
