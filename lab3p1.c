/* 
 * File:   main.c
 * Author: yangjiaw
 *
 * Created on October 8, 2015, 10:37 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double firstNumber,secondNumber;
    char inChar;
    printf("Enter first number: ");
    scanf("%lf",&firstNumber);
    printf("Enter second number: ");
    scanf("%lf",&secondNumber);
    printf("Enter calculation command (one of a, s, m, or d): ");
    scanf(" %c",&inChar);
    if  (secondNumber==0 && inChar=='d')
         printf("Error, trying to divide by zero");
    else 
    { 
        switch (inChar)
         {
             case 'a':printf("Sum of %.2lf and %.2lf is %.2lf",firstNumber,secondNumber,firstNumber+secondNumber);
                 break;
             case 's':printf("Difference of %.2lf from %.2lf is %.2lf",firstNumber,secondNumber,firstNumber-secondNumber);
                 break;
             case 'm':printf("Product of %.2lf and %.2lf is %.2lf",firstNumber,secondNumber,firstNumber*secondNumber);
                  break;
             case 'd':printf("Division of %.2lf by %.2lf is %.2lf",firstNumber,secondNumber,firstNumber/secondNumber);
                  break;
             default :printf("Error, unknown calculation command given\n");
                  break;}
        
    }
    return (EXIT_SUCCESS);
}