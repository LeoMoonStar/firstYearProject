/* 
 * File:   main.c
 * Author: yangjiaw
 *
 * Created on October 7, 2015, 1:03 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int seed;
    int guessNumber=1;
    int answer;
    printf("Enter seed: ");
    scanf("%d",&seed);
    srand(seed);
    while(guessNumber>0)
    {
        
        printf("Guess a number from 1 to 7 (<=0 to quit): ");
        scanf("%d",&guessNumber);
        if(guessNumber>7)
        printf("Number too high, guess again!\n");
        
        else if (guessNumber>0)
        {   
            answer=rand()%7+1;
           if (guessNumber == answer)
           {
             printf("Number picked: %d\n",answer);
             printf("Good guess!\n");
           }
           else if(guessNumber!=answer && guessNumber<=7)
            {
                printf("Number picked: %d\n",answer);
                printf("Sorry, try again!\n");
            }
        }
      
       }printf("Goodbye");
    return (EXIT_SUCCESS);
}