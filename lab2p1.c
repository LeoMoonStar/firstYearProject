/* 
 * File:   main.c
 * Author: yangjiaw
 *
 * Created on September 21, 2015, 1:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    const  double A=1.5;
    const  double B=10;
    const  double C=20.0/125;
    double patientAge,doctorsEstimate,Likelihood;
    int BNTP;//identify all the variables 
    printf("Enter patient age: ");
    scanf("%lf",&patientAge);
    
    printf("Enter doctor %% likelihood guess of heart failure: ");
    scanf("%lf",&doctorsEstimate);
    
    printf("Enter patient BNPT value (between 0 and 1000 pg/ml): ");
    scanf("%d",&BNTP);//tell the user to type the value and receive them
    
    Likelihood=(doctorsEstimate/A)+(patientAge/B)+(BNTP*C);//do the calculation
    printf("Computed likelihood of heart failure is %.1lf%%",Likelihood);//print the result
    

    return (EXIT_SUCCESS);
}