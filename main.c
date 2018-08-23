/*
 * Author: Jonathan Nuñez de Caceres.
 * Date: August 22, 2018
 * Description: This program adds, subtracts, multiplies and divides any given two numbers.
 */

#include <stdio.h>

int main() {
    // Variable Declaration
    double num1;
    double num2;
    double add;
    double subtract;
    double multiply;
    double divide;

    // The user is asked to enter two numbers
    // which are assigned to num1 and num2
    printf("Enter the first number:");
    scanf("%lf",&num1);
    printf("Enter the second number:");
    scanf("%lf",&num2);

    // Each operation is solved and the value is
    // assigned to its corresponding variable
    add = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide = num1 / num2;

    // The results are printed
    printf("Sum = %lf\n", add);
    printf("Difference = %lf\n", subtract);
    printf("Multiplication = %lf\n", multiply);
    printf("Division = %lf\n", divide);

    return 0;
}