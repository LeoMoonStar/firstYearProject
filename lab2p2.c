/* 
 * File:   main.c
 * Author: yangjiaw
 *
 * Created on September 21, 2015, 1:51 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int B0,B1,B2,B3,input,answer;
    printf("Enter 4-bit binary number:");
    scanf("%d",&input);
    
    B3=input/1000;//put all numbers in the right positions
    B2=(input-1000*B3)/100;
    B1=(input-1000*B3-100*B2)/10;
    B0=(input-1000*B3-100*B2-10*B1)/1;
    
    answer=(B3*8)+(B2*4)+(B1*2)+B0;//calculate the final answer
    printf("%d in base 2 is %d in base 10",input,answer);
    
    
    return (EXIT_SUCCESS);
}