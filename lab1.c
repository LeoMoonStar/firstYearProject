/* 
 * File:   main.c
 * Author: yangjiaw
 *
 * Created on September 13, 2015, 7:40 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int inputNumber1,inputNumber2;//reserve two positions for two number
    printf("Enter First Number: ");
    scanf("%d",&inputNumber1);
    printf("Enter Second Number: ");
    scanf("%d",&inputNumber2);// receive two numbers
    int sum = inputNumber1+inputNumber2,difference = inputNumber1-inputNumber2; 
    int squareofNumber1= inputNumber1*inputNumber1, squareofNumber2= inputNumber2*inputNumber2;
    int division = inputNumber2/inputNumber1;//identify each value and do the calculation
    
    printf("Sum: %d\nDifference: %d\nSquare of number1: %d\nSquare of number2: %d\nDivision: %d\n",sum,difference,squareofNumber1,squareofNumber2,division);
    
    
    return (EXIT_SUCCESS);
}
