#include <stdio.h>

/**
 * This code converts the temprature fahrenheit into celsius.
 * user is expected to input a fahrenheit value to convert.
 * 
 * @return: nothing. 
 */

int main(void) {
    printf("Please enter a temperature value in Farenheit: ");

    float temperatureF;
    scanf("%f", &temperatureF); // collect user input

    float temperatureC = (temperatureF - 32.0) * 5.0/9.0; //conversion formula

    printf("The corresponding temperature in Celsius is %.2f C. \n", temperatureC);

}