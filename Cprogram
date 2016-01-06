# lab0
/* 
 * File:   main.c
 * Author: yangjiaw
 *
 * Created on September 13, 2015, 6:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    printf("This is my Lab 0 program!\n");
    return (EXIT_SUCCESS);
}

# lab 1
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


# lab 2 part 1
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

#lab 2 part 2
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

# lab 3 part 1
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

# lab 3 part 2
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

# lab 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double gaussFunc(double x,double spread)
{
    double result;
    result=exp(-x*x/spread);
    return result;
}




int main(void){
    double spread=0.0,a,b,midpoint,result=0.0,range;
    int n=2;
    double gaussFunc(double x, double spread);
    
    
    while(spread<=0){
        printf("Enter the spread value (must be >0): ");
        scanf("%lf",&spread);
    }
    while (n>=1){
       printf("Please enter the number of rectangles (n): ");
       scanf("%d",&n);
       if (n<1)
          break;
       else {
         printf("Enter the interval of integration (a b): ");
         scanf("%lf %lf",&a,&b);
        while (a>b){
            printf("Invalid interval!\n");
            printf("Enter the interval of integration (a b): ");
            scanf("%lf %lf",&a,&b);
        }
           range=(b-a)/n;
           midpoint=a+range/2;
           while (midpoint<=b-range/2) {
               result=result+gaussFunc(midpoint, spread)*range;
               midpoint+=range;
           }
        
           printf("Integral of Gaussian with spread %.3lf on [%.3lf, %.3lf] with n = %d is: %.3lf \n",spread,a,b,n,result);
           result=0;}}
        printf("Exiting.");
        return 0;
}


# lab 5
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char DNA[] = {'A', 'G', 'C', 'G', 'G', 'G', 'A', 'C', 'C', 'G', 'T', 'C',
    'C', 'C', 'G', 'A', 'C', 'A', 'T', 'T', 'G', 'A', 'T', 'G',
    'A', 'A', 'G', 'G', 'G', 'T', 'C', 'A', 'T', 'A', 'G', 'A',
    'C', 'C', 'C', 'A', 'A', 'T', 'A', 'C', 'G', 'C', 'C', 'A',
    'C', 'C', 'A', 'C', 'C', 'C', 'C', 'A', 'A', 'G', 'T', 'T',
    'T', 'T', 'C', 'C', 'T', 'G', 'T', 'G', 'T', 'C', 'T', 'T',
    'C', 'C', 'A', 'T', 'T', 'G', 'A', 'G', 'T', 'A', 'G', 'A',
    'T', 'T', 'G', 'A', 'C', 'A', 'C', 'T', 'C', 'C', 'C', 'A',//identify the DNA sequence as a constant
    'G', 'A', 'T', 'G', '\0'};

void readSequence(int length,char inputSequence[]){
    
    int count;
    printf("Enter %d characters (one of AGTC*) as a search sequence: ",length);
    for (count=0;count<length;count++) {
        scanf(" %c",&inputSequence[count]);
    }
    
}//A function that is used to read letters typed and put it into a sequence



bool elementCheck(char inputSequence[],int length){
    bool rightCharacter=true;
    int i;
    for (i=0; i<length; i++) {
        if(inputSequence[i]!='A'&&inputSequence[i]!='G'&&inputSequence[i]!='T'&&inputSequence[i]!='C'&&inputSequence[i]!='*')
            rightCharacter=false;       
    }
    return rightCharacter;
}//A function that used to check whether all the element fit the requirement, then return a bool value



void searchElement(char inputSequence[],char DNA[],int length){
    int correctPosition=0,i,j=0;
    for (j=0;j<101;j++){
        i=0;
        while(((inputSequence[i]=='*')||(DNA[j+i]==inputSequence[i]))&&(i<length)&&(DNA[i+j]!='\0')){
            i++;
            if (i==length){
                correctPosition=j;
                printf("Match of search sequence found at element %d\n",correctPosition);}
            
            
            
        }
        
    }
    
}//a function that actually do the search work and return the correct position of the first letter



int main(void) {
    int length = 1;
    
    while (length>0){//a while loop to keep asking for length and value of sequence
        int count=0;// if there exist wrong letter, count will help us to print it out
        printf("Enter length of DNA sequence to match: ");
        scanf("%d",&length);
        char inputSequence[length];

        if(length<=0){// judging that if length is less than or equal to zero, and jump out of the loop when it is
            break;
        }
        else  {
            
                readSequence(length,inputSequence);
                if (elementCheck(inputSequence,length)==true){
                    
                    searchElement(inputSequence,DNA,length);
                }
                if (elementCheck(inputSequence, length)==false) {
                    
                    while(count<length){
                        
                        if((inputSequence[count]!='A')&&(inputSequence[count]!='G')&&(inputSequence[count]!='T')&&(inputSequence[count]!='C')&&(inputSequence[count]!='*'))
                        {
                           printf("Erroneous character input '%c' exiting\n",inputSequence[count]);
                            printf("Goodbye");
                            return 0;
                        }
                        count++;      
                        
                    }
                    length=-1;
                    
                    
                }
            }
    }
    
    printf("Goodbye");
    return 0;
    }


# lab 6
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool positionInBounds(int N, char row, char col) {//to determin that whether the picked position in the board or not
    bool positionInBounds = false;
    int rowNumber, colNumber;
    rowNumber = row - 'a';
    colNumber = col - 'a';
    if ((rowNumber >= 0)&&(rowNumber < N)&&(colNumber >= 0)&&(colNumber < N))
        positionInBounds = true;
    return positionInBounds;

}

bool checkLegalIndirection(char board[26][26], int N, char row, char col, char colour, int deltaRow, int deltaCol) {

    bool positionVacant = false;
    bool directionLeagal = false;
    char diffColor = 'B' + 'W' - colour; //determin the different colour of th picked cheese
    int rowInt = row - 'a', colInt = col - 'a'; //rowInt and colInt mean the position in number form of the next move that player gonner take 


    if (board[rowInt][colInt] == 'U')
        positionVacant = true; // to make sure that the next move must be vacant

    if (positionVacant == true) {
        for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
            for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
            {
                if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                    int newRow = rowInt + deltaRow;
                    int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                    if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                    {
                        if (board[newRow][newCol] == diffColor) {// not the same color
                            while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {//must be the different color and inside the board
                                newRow = newRow + deltaRow;
                                newCol = newCol + deltaCol;

                                if ((board[newRow][newCol] == colour) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                                    directionLeagal = true;
                                    return directionLeagal;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return directionLeagal;
}

void printBoard(char board[26][26], int N) {//print out the whole board
    int row, col;
    char initialLetter = 'a';
    char printedLetter;
    printf("  ");
    for (col = 0; col < N; col++) {
        printedLetter = initialLetter + col;
        printf("%c", printedLetter);
    }
    printedLetter = 0;
    printf("\n");
    for (row = 0; row < N; row++) {
        printedLetter = initialLetter + row;
        printf("%c", printedLetter);
        printf(" ");
        for (col = 0; col < N; col++)
            printf("%c", board[row][col]);
        printf("\n");

    }
}

void changeBoard(char board[26][26], char colour, char row, char col) {// a simple function to change the board with the typed
    int inputRow, inputCol;
    inputRow = row - 'a';
    inputCol = col - 'a';
    board[inputRow][inputCol] = colour;

}

void initinBoard(char board[26][26], int N) {
    int row, col;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++)
            board[row][col] = 'U';
    }
    board[(N / 2) - 1][(N / 2) - 1] = 'W';
    board[(N / 2) - 1][N / 2] = 'B';
    board[N / 2][(N / 2) - 1] = 'B';
    board[N / 2][N / 2] = 'W';
}

void printAvailableMove(char colour, int N, char board[26][26], int deltaRow, int deltaCol) {//print out all the available move
    char row, col;
    int rowNumber, colNumber;
    printf("Available moves for %c: \n", colour);
    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            row = rowNumber + 'a';
            col = colNumber + 'a';
            if (checkLegalIndirection(board, N, row, col, colour, deltaRow, deltaCol)) {//using the checkLegalIndirecton
                printf("%c%c\n", row, col);
            }
        }
    }

}

void judgeAndFlip(char board[26][26], char colour, char row, char col, int N, int deltaRow, int deltaCol) {//after receiving a new move, tell it is a valiad move or not, and flip other tail
    char diffColor = 'B' + 'W' - colour;
    int rowInt = row - 'a', colInt = col - 'a';
    int i, j;
    if (checkLegalIndirection(board, N, row, col, colour, deltaRow, deltaCol) == true) {
        printf("Valid move.");
        changeBoard(board, colour, row, col);
        for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
            for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
            {
                if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                    int newRow = rowInt + deltaRow;
                    int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                    if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                    {
                        if (board[newRow][newCol] == diffColor) {
                            while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                                newRow = newRow + deltaRow;
                                newCol = newCol + deltaCol;
                                
                                if (board[newRow][newCol] == colour) {//then you find the correct direction and position of the same colour cheese in this line
                                    int rowFlip=rowInt,colFlip=colInt;
                                    while((rowFlip!=newRow)||(colFlip!=newCol)){
                                        board[rowFlip][colFlip]=colour;
                                        rowFlip+=deltaRow;
                                        colFlip+=deltaCol;
                                    }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    else
        printf("Invalid move.");

    }

void boardConfiguration(char board[26][26], char row, char col, char colour, int N) {//change the board
    printf("Enter board configuration:\n");
    while (colour != '!') {
        scanf(" %c", &colour);
        scanf(" %c", &row);
        scanf(" %c", &col);
        changeBoard(board, colour, row, col);
    }

}

int main(int argc, char** argv) {
    int N;
    char row, col;
    char board[26][26];
    char colour = 0;
    int deltaRow, deltaCol;
    printf("Enter the board dimension: ");
    scanf("%d", &N);
    initinBoard(board, N);
    printBoard(board, N);
    boardConfiguration(board, row, col, colour, N);
    printBoard(board, N);
    colour = 'W';
    printAvailableMove(colour, N, board, deltaRow, deltaCol);
    colour = 'B';
    printAvailableMove(colour, N, board, deltaRow, deltaCol);
    printf("Enter a move: \n");
    scanf(" %c", &colour);
    scanf(" %c", &row);
    scanf(" %c", &col);
    judgeAndFlip(board,colour,row,col,N,deltaRow,deltaCol);
    printf("\n");
    printBoard(board, N);
    return (EXIT_SUCCESS);
}
# lab 7 part 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool positionInBounds(int N, char row, char col) {//to determin that whether the picked position in the board or not
    bool positionInBounds = false;
    int rowNumber, colNumber;
    rowNumber = row - 'a';
    colNumber = col - 'a';
    if ((rowNumber >= 0)&&(rowNumber < N)&&(colNumber >= 0)&&(colNumber < N))
        positionInBounds = true;
    return positionInBounds;

}

bool checkLegalIndirection(char board[26][26], int N, char row, char col, char colour, int deltaRow, int deltaCol) {

    bool positionVacant = false;
    bool directionLeagal = false;
    char diffColor = 'B' + 'W' - colour; //determin the different colour of th picked cheese
    int rowInt = row - 'a', colInt = col - 'a'; //rowInt and colInt mean the position in number form of the next move that player gonner take 


    if (board[rowInt][colInt] == 'U')
        positionVacant = true; // to make sure that the next move must be vacant

    if (positionVacant == true) {
        for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
            for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
            {
                if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                    int newRow = rowInt + deltaRow;
                    int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                    if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                    {
                        if (board[newRow][newCol] == diffColor) {// not the same color
                            while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {//must be the different color and inside the board
                                newRow = newRow + deltaRow;
                                newCol = newCol + deltaCol;

                                if ((board[newRow][newCol] == colour) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                                    directionLeagal = true;
                                    return directionLeagal;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return directionLeagal;
}

void printBoard(char board[26][26], int N) {//print out the whole board
    int row, col;
    char initialLetter = 'a';
    char printedLetter;
    printf("  ");
    for (col = 0; col < N; col++) {
        printedLetter = initialLetter + col;
        printf("%c", printedLetter);
    }
    printedLetter = 0;
    printf("\n");
    for (row = 0; row < N; row++) {
        printedLetter = initialLetter + row;
        printf("%c", printedLetter);
        printf(" ");
        for (col = 0; col < N; col++)
            printf("%c", board[row][col]);
        printf("\n");

    }
}

void changeBoard(char board[26][26], char colour, char row, char col) {// a simple function to change the board with the typed
    int inputRow, inputCol;
    inputRow = row - 'a';
    inputCol = col - 'a';
    board[inputRow][inputCol] = colour;

}

void initinBoard(char board[26][26], int N) {
    int row, col;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++)
            board[row][col] = 'U';
    }
    board[(N / 2) - 1][(N / 2) - 1] = 'W';
    board[(N / 2) - 1][N / 2] = 'B';
    board[N / 2][(N / 2) - 1] = 'B';
    board[N / 2][N / 2] = 'W';
}

bool checkAvailableMove(char colour, int N, char board[26][26], int deltaRow, int deltaCol) {//print out all the available move
    bool existAvailableMove = false;
    char row, col;
    int rowNumber, colNumber;
    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            row = rowNumber + 'a';
            col = colNumber + 'a';
            if ((board[rowNumber][colNumber] == 'U' && checkLegalIndirection(board, N, row, col, colour, deltaRow, deltaCol))) {//using the checkLegalIndirecton
                existAvailableMove = true;
            }
        }
    }
    return existAvailableMove;
}

void changeAndFlip(char board[26][26], char colour, char row, char col, int N, int deltaRow, int deltaCol) {//after receiving a new move, tell it is a valiad move or not, and flip other tail
    char diffColor = 'B' + 'W' - colour;
    int rowInt = row - 'a', colInt = col - 'a';
    int i, j;
    changeBoard(board, colour, row, col);
    for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
        for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
        {
            if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                int newRow = rowInt + deltaRow;
                int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                {
                    if (board[newRow][newCol] == diffColor) {
                        while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                            newRow = newRow + deltaRow;
                            newCol = newCol + deltaCol;

                            if ((board[newRow][newCol] == colour) && (positionInBounds(N,(char) newRow+'a', (char) newCol+'a'))) {//then you find the correct direction and position of the same colour cheese in this line+
                                int rowFlip = rowInt, colFlip = colInt;
                                while ((rowFlip != newRow) || (colFlip != newCol)) {
                                    board[rowFlip][colFlip] = colour;
                                    rowFlip += deltaRow;
                                    colFlip += deltaCol;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}

int countFlip(char board[26][26], char colour, char row, char col, int N, int deltaRow, int deltaCol) {//after receiving a new move, tell it is a valiad move or not, and flip other tail
    char diffColor = 'B' + 'W' - colour;
    int count = 0;
    int rowInt = row - 'a', colInt = col - 'a';
    int i, j;
    for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
        for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
        {
            if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                int newRow = rowInt + deltaRow;
                int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                {
                    if (board[newRow][newCol] == diffColor) {
                        while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                            newRow = newRow + deltaRow;
                            newCol = newCol + deltaCol;

                            if (board[newRow][newCol] == colour) {//then you find the correct direction and position of the same colour cheese in this line
                                int rowFlip = rowInt, colFlip = colInt;
                                while ((rowFlip != newRow) || (colFlip != newCol)) {
                                    count++;
                                    rowFlip += deltaRow;
                                    colFlip += deltaCol;
                                }
                                count=count-1;
                            }
                        }
                    }
                }
            }
        }
    }
    return count;
}

void boardConfiguration(char board[26][26], char row, char col, char colour, int N) {//change the board
    printf("Enter board configuration:\n");
    while (colour != '!') {
        scanf(" %c", &colour);
        scanf(" %c", &row);
        scanf(" %c", &col);
        changeBoard(board, colour, row, col);
    }

}

void comMove(char board[26][26], int N, char comColour, int deltaRow, int deltaCol) {
    char row, col, bestRow = 0, bestCol = 0, scoreBoard[26][26];
    int score = 0, rowNumber, colNumber;
    for (rowNumber = 0; rowNumber < N; rowNumber++)//Initial the scoreboard with all the value equal to zero
        for (colNumber = 0; colNumber < N; colNumber++) {
            scoreBoard[rowNumber][colNumber] = 0;
        }
    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            row = rowNumber + 'a';
            col = colNumber + 'a';
            if ((board[rowNumber][colNumber]=='U')&&checkLegalIndirection(board, N, row, col, comColour, deltaRow, deltaCol))
                scoreBoard[rowNumber][colNumber] = countFlip(board, comColour, row, col, N, deltaRow, deltaCol);
        }
    }
    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            if ((scoreBoard[rowNumber][colNumber] > score)//get the highest score
                    || ((scoreBoard[rowNumber][colNumber] == score)&&(rowNumber < bestRow - 'a'))//when the score is the same, the best position should be the one that has lower row
                    || ((scoreBoard[rowNumber][colNumber] == score)&&(rowNumber == bestRow - 'a')&&(colNumber < bestCol - 'a'))) {
                score = scoreBoard[rowNumber][colNumber];
                bestRow = rowNumber + 'a';
                bestCol = colNumber + 'a';
            }
        }
    }
    printf("Computer places %c at %c%c.\n", comColour, bestRow, bestCol);
    changeAndFlip(board, comColour, bestRow, bestCol, N, deltaRow, deltaCol);
}

void determineWiner(char board[26][26], int N) {//when the game end,determine which one is the winner
    int i, j, blackCount = 0, whiteCount = 0;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            if (board[i][j] == 'B')
                blackCount++;
            if (board[i][j] == 'W')
                whiteCount++;
        }
    if (blackCount > whiteCount)
        printf("B player wins.");
    if (blackCount == whiteCount)
        printf("Draw!");
    if (blackCount < whiteCount)
        printf("W player wins.");
}

int main(int argc, char** argv) {
    int N = 0;
    char playerRow, playerCol, comRow, comCol;
    char board[26][26];
    char colour;
    char comColour;
    char playerColour;
    int deltaRow, deltaCol;
    bool validMove;
    printf("Enter the board dimension: ");
    scanf("%d", &N);
    printf("Computer plays (B/W) : ");
    scanf(" %c", &comColour);
    playerColour = 'B' + 'W' - comColour;
    initinBoard(board, N);
    printBoard(board, N);
    validMove = true;
    if (playerColour == 'B') {//player need to play first once it get the B
        printf("Enter move for colour %c (RowCol): ", playerColour);
        scanf(" %c", &playerRow);
        scanf(" %c", &playerCol);
        if ((positionInBounds(N, playerRow, playerCol)
                && checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)
                && validMove) == true) {//always check move legal or not
            changeAndFlip(board, playerColour, playerRow, playerCol, N, deltaRow, deltaCol);
            printBoard(board, N);
        } else if ((positionInBounds(N, playerRow, playerCol) &&
                checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)) == false) {//received move is not a legal move
            printf("%c player wins.", comColour);
            validMove = false;
        }
    }

    while ((checkAvailableMove(comColour, N, board, deltaRow, deltaCol)
            || checkAvailableMove(playerColour, N, board, deltaRow, deltaCol)) && validMove) {//one of computer and player has available moves
        if (checkAvailableMove(comColour, N, board, deltaRow, deltaCol)) {//if computer has available move, it give the best move among all available moves 
            comMove(board, N, comColour, deltaRow, deltaCol);
            printBoard(board, N);
        } else if (checkAvailableMove(comColour, N, board, deltaRow, deltaCol) == false) {
            printf("%c player has no valid move.\n", comColour);
        }
        if (checkAvailableMove(playerColour, N, board, deltaRow, deltaCol)) {//if player has available move,program receives a input move 
            printf("Enter move for colour %c (RowCol): ", playerColour);
            scanf(" %c", &playerRow);
            scanf(" %c", &playerCol);
            if ((positionInBounds(N, playerRow, playerCol)
                    && checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)
                    && validMove) == true) {//received move is a legal move 
                changeAndFlip(board, playerColour, playerRow, playerCol, N, deltaRow, deltaCol);
                printBoard(board, N);
            } else if ((positionInBounds(N, playerRow, playerCol) &&
                    checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)) == false) {//received move is not a legal move
                printf("Invalid move.\n");
                printf("%c player wins.", comColour);
                validMove = false;

            }
        }
    }

    if (validMove == true)
        determineWiner(board, N);
    return (EXIT_SUCCESS);
}
#lab 7 part 2
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
static const double lastRound = 16;
static const double lastTwoRound = 8;
static const double lastThreeRound = 4;


void getScoreBoard(int scoreBoard[26][26], int N, char board[26][26], char colour, int deltaRow, int deltaCol);
void evaluateProrityMove(char board[26][26], int N, char colour, int deltaRow, int deltaCol);
bool oppositeCorner(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol);
int bestCorner(char board[26][26], int N, char colour, int deltaRow, int deltaCol);
bool cornerExistCheck(char board[26][26], int N, char colour, int deltaRow, int deltaCol);
bool positionInBounds(int N, char row, char col);
bool checkLegalIndirection(char board[26][26], int N, char row, char col, char colour, int deltaRow, int deltaCol);
void printBoard(char board[26][26], int N);
void changeBoard(char board[26][26], char colour, char row, char col);
void initinBoard(char board[26][26], int N);
bool checkAvailableMove(char colour, int N, char board[26][26], int deltaRow, int deltaCol);
void changeAndFlip(char board[26][26], char colour, char row, char col, int N, int deltaRow, int deltaCol);
int countFlip(char board[26][26], char colour, char row, char col, int N, int deltaRow, int deltaCol);
void cornerCheckAndScoreCount(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol);
void lastRoundCheck(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol);
int oppositeLastRound(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol);
void lastTwoRoundCheck(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol);
int oppositeLastTwoRound(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol);
void lastThreeRoundCheck(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol);
int oppositeLastThreeRound(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol);
void coreStrategy(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol);
int oppositeAvailableMoveCount(char board[26][26], int N, char colour, int deltaRow, int deltaCol, char row, char col);

void coreStrategy(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol) {
    int row, col;
    
    char diffColour = 'B' + 'W' - colour;
    int middleNumber;

    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++) {
            if (scoreBoard[row][col] != 0) {
                middleNumber = oppositeAvailableMoveCount(board, N, colour, deltaRow, deltaCol, row + 'a', col + 'a');
                scoreBoard[row][col] = scoreBoard[row][col] - middleNumber;

            }
        }

}

int oppositeAvailableMoveCount(char board[26][26], int N, char colour, int deltaRow, int deltaCol, char row, char col) {
    int r, c, totalNumber = 0;
    char fakeBoard[26][26];
    char diffColour = 'B' + 'W' - colour;
    for (r = 0; r < N; r++)
        for (c = 0; c < N; c++)
            fakeBoard[r][c] = board[r][c];

    changeAndFlip(fakeBoard, colour, row, col, N, deltaRow, deltaCol);

    for (r = 0; r < N; r++)
        for (c = 0; c < N; c++)
            if (checkLegalIndirection(fakeBoard, N, r + 'a', c + 'a', diffColour, deltaRow, deltaCol) == true)
                totalNumber++;


    return totalNumber;
}

void lastRoundCheck(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol) {
    int rowNumber, colNumber;
    for (rowNumber = 0; rowNumber < N; rowNumber++)
        for (colNumber = 0; colNumber < N; colNumber++) {
            if (rowNumber == 0 || rowNumber == N - 1 || colNumber == 0 || colNumber == N - 1)
                scoreBoard[rowNumber][colNumber] == scoreBoard[rowNumber][colNumber]*(lastRound / oppositeLastRound(board, colour, N, rowNumber, colNumber, deltaRow, deltaCol)); //if the available move is on side

        }
}

void lastThreeRoundCheck(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol) {
    int rowNumber, colNumber;
    for (rowNumber = 0; rowNumber < N; rowNumber++)
        for (colNumber = 0; colNumber < N; colNumber++) {
            if (rowNumber == 2 || rowNumber == N - 3 || colNumber == 2 || colNumber == N - 3)
                scoreBoard[rowNumber][colNumber] == scoreBoard[rowNumber][colNumber]*(lastThreeRound / oppositeLastThreeRound(board, colour, N, rowNumber, colNumber, deltaRow, deltaCol)); //if the available move is on side

        }
}

int oppositeLastThreeRound(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol) {
    char fakeBoard[26][26];
    int rowNum, colNum;
    int responseNum = 0;
    char diffColour = 'B' + 'W' - colour;
    for (rowNum = 0; rowNum < N; rowNum++)
        for (colNum = 0; colNum < N; colNum++) {
            fakeBoard[rowNum][colNum] = board[rowNum][colNum];
        }//copy fakeBoard with the current board
    changeAndFlip(fakeBoard, colour, (char) rowNumber + 'a', (char) colNumber + 'a', N, deltaRow, deltaCol);
    for (rowNum = 0; rowNum < N; rowNum++)
        for (colNum = 0; colNum < N; colNum++) {
            if (checkLegalIndirection(board, N, rowNum + 'a', colNum + 'a', diffColour, deltaRow, deltaCol) == true)
                if (rowNumber == 2 || rowNumber == N - 3 || colNumber == 2 || colNumber == N - 3)
                    responseNum++;
        }

    return responseNum;
}

void lastTwoRoundCheck(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol) {
    int rowNumber, colNumber;
    for (rowNumber = 0; rowNumber < N; rowNumber++)
        for (colNumber = 0; colNumber < N; colNumber++) {
            if (rowNumber == 1 || rowNumber == N - 2 || colNumber == 1 || colNumber == N - 2)
                scoreBoard[rowNumber][colNumber] == scoreBoard[rowNumber][colNumber]*(oppositeLastTwoRound(board, colour, N, rowNumber, colNumber, deltaRow, deltaCol) / lastTwoRound); //if the available move is on side

        }
}

int oppositeLastTwoRound(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol) {
    char fakeBoard[26][26];
    int rowNum, colNum;
    int responseNum = 0;
    char diffColour = 'B' + 'W' - colour;
    for (rowNum = 0; rowNum < N; rowNum++)
        for (colNum = 0; colNum < N; colNum++) {
            fakeBoard[rowNum][colNum] = board[rowNum][colNum];
        }//copy fakeBoard with the current board
    changeAndFlip(fakeBoard, colour, (char) rowNumber + 'a', (char) colNumber + 'a', N, deltaRow, deltaCol);
    for (rowNum = 0; rowNum < N; rowNum++)
        for (colNum = 0; colNum < N; colNum++) {
            if (checkLegalIndirection(board, N, rowNum + 'a', colNum + 'a', diffColour, deltaRow, deltaCol) == true)
                if (rowNumber == 1 || rowNumber == N - 2 || colNumber == 1 || colNumber == N - 2)
                    responseNum++;
        }

    return responseNum;
}

int oppositeLastRound(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol) {
    char fakeBoard[26][26];
    int rowNum, colNum;
    int responseNum = 0;
    char diffColour = 'B' + 'W' - colour;
    for (rowNum = 0; rowNum < N; rowNum++)
        for (colNum = 0; colNum < N; colNum++) {
            fakeBoard[rowNum][colNum] = board[rowNum][colNum];
        }//copy fakeBoard with the current board
    changeAndFlip(fakeBoard, colour, (char) rowNumber + 'a', (char) colNumber + 'a', N, deltaRow, deltaCol);
    for (rowNum = 0; rowNum < N; rowNum++)
        for (colNum = 0; colNum < N; colNum++) {
            if (checkLegalIndirection(board, N, rowNum + 'a', colNum + 'a', diffColour, deltaRow, deltaCol) == true)
                if (rowNumber == 0 || rowNumber == N - 1 || colNumber == 0 || colNumber == N - 1)
                    responseNum++;
        }

    return responseNum;
}

void cornerCheckAndScoreCount(char board[26][26], int scoreBoard[26][26], int N, char colour, int deltaRow, int deltaCol) {
    int rowNumber, colNumber;
    for (rowNumber = 0; rowNumber < N; rowNumber++)
        for (colNumber = 0; colNumber < N; colNumber++) {
            if (scoreBoard[rowNumber][colNumber] != 0)
                if (oppositeCorner(board, colour, N, rowNumber, colNumber, deltaRow, deltaCol) == false)
                    scoreBoard[rowNumber][colNumber] = 16 * scoreBoard[rowNumber][colNumber];
        }//if this move can cause available corner for the opposite,then times its score with 2
}

void getScoreBoard(int scoreBoard[26][26], int N, char board[26][26], char colour, int deltaRow, int deltaCol) {
    int rowNumber, colNumber;
    char row, col;
    for (rowNumber = 0; rowNumber < N; rowNumber++)
        for (colNumber = 0; colNumber < N; colNumber++) {
            scoreBoard[rowNumber][colNumber] = 0;
        }//initial scoreboard

    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            row = rowNumber + 'a';
            col = colNumber + 'a';
            if ((board[rowNumber][colNumber] == 'U') && checkLegalIndirection(board, N, row, col, colour, deltaRow, deltaCol))
                scoreBoard[rowNumber][colNumber] = countFlip(board, colour, row, col, N, deltaRow, deltaCol);
        }
    }
}

void evaluateProrityMove(char board[26][26], int N, char colour, int deltaRow, int deltaCol) {

    char row, col, bestRow = 0, bestCol = 0;
    int score = 0, rowNumber, colNumber, scoreBoard[26][26];
    int number = 0;

    if (cornerExistCheck(board, N, colour, deltaRow, deltaCol) == true) {//if there exist corner,go corner first
        switch (bestCorner(board, N, colour, deltaRow, deltaCol)) {
            case 0:
                changeAndFlip(board, colour, 'a', 'a', N, deltaRow, deltaCol);
                printf("Computer places %c at %c%c.\n", colour, 'a', 'a');
                break;
            case 1:
                changeAndFlip(board, colour, 'a', 'a' + N - 1, N, deltaRow, deltaCol);
                printf("Computer places %c at %c%c.\n", colour, 'a', 'a' + N - 1, N);
                break;
            case 2:
                changeAndFlip(board, colour, 'a' + N - 1, 'a', N, deltaRow, deltaCol);
                printf("Computer places %c at %c%c.\n", colour, 'a' + N - 1, 'a');
                break;
            case 3:
                changeAndFlip(board, colour, 'a' + N - 1, 'a' + N - 1, N, deltaRow, deltaCol);
                printf("Computer places %c at %c%c.\n", colour, 'a' + N - 1, 'a' + N - 1);
                break;
        }
    } else {//start to change value of score of each position based on the different situation
        getScoreBoard(scoreBoard, N, board, colour, deltaRow, deltaCol);
        cornerCheckAndScoreCount(board, scoreBoard, N, colour, deltaRow, deltaCol);
        coreStrategy(board,scoreBoard,N,colour,deltaRow,deltaCol);
        if (N >= 6) {
            lastRoundCheck(board, scoreBoard, N, colour, deltaRow, deltaCol);
            lastTwoRoundCheck(board, scoreBoard, N, colour, deltaRow, deltaCol);
        }
        if (N >= 8)
            lastThreeRoundCheck(board, scoreBoard, N, colour, deltaRow, deltaCol);

        for (rowNumber = 0; rowNumber < N; rowNumber++) {
            for (colNumber = 0; colNumber < N; colNumber++) {
                if ((scoreBoard[rowNumber][colNumber] > score)//get the highest score
                        || ((scoreBoard[rowNumber][colNumber] == score)&&(rowNumber < bestRow - 'a'))//when the score is the same, the best position should be the one that has lower row
                        || ((scoreBoard[rowNumber][colNumber] == score)&&(rowNumber == bestRow - 'a')&&(colNumber < bestCol - 'a'))) {
                    score = scoreBoard[rowNumber][colNumber];
                    bestRow = rowNumber + 'a';
                    bestCol = colNumber + 'a';
                }
            }
        }



        printf("Computer places %c at %c%c.\n", colour, bestRow, bestCol);
        changeAndFlip(board, colour, bestRow, bestCol, N, deltaRow, deltaCol);
    }

}

bool oppositeCorner(char board[26][26], char colour, int N, int rowNumber, int colNumber, int deltaRow, int deltaCol) {

    char fakeBoard[26][26];
    int rowNum, colNum;
    char computerColour = 'B' + 'W' - colour;
    for (rowNum = 0; rowNum < N; rowNum++)
        for (colNum = 0; colNum < N; colNum++) {
            fakeBoard[rowNum][colNum] = board[rowNum][colNum];
        }//copy fakeBoard with the current board
    changeAndFlip(fakeBoard, colour, (char) rowNumber + 'a', (char) colNumber + 'a', N, deltaRow, deltaCol);
    if (cornerExistCheck(fakeBoard, N, computerColour, deltaRow, deltaCol) == true)
        return true;
    else
        return false;


}

int bestCorner(char board[26][26], int N, char colour, int deltaRow, int deltaCol) {
    int returnNumber = 0;
    int cornerNum = 0;
    int a[4];
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    if ((checkLegalIndirection(board, N, 'a', 'a', colour, deltaRow, deltaCol)))
        a[0] = countFlip(board, colour, 'a', 'a', N, deltaRow, deltaCol);
    if ((checkLegalIndirection(board, N, 'a', 'a' + N - 1, colour, deltaRow, deltaCol)))
        a[1] = countFlip(board, colour, 'a', 'a' + N - 1, N, deltaRow, deltaCol);
    if ((checkLegalIndirection(board, N, 'a' + N - 1, 'a', colour, deltaRow, deltaCol)))
        a[2] = countFlip(board, colour, 'a' + N - 1, 'a', N, deltaRow, deltaCol);
    if ((checkLegalIndirection(board, N, 'a' + N - 1, 'a' + N - 1, colour, deltaRow, deltaCol)))
        a[3] = countFlip(board, colour, 'a' + N - 1, 'a' + N - 1, N, deltaRow, deltaCol);
    int initialNumber = a[0];
    for (returnNumber = 0; returnNumber < 4; returnNumber++) {
        if (a[returnNumber] > initialNumber) {

            initialNumber = returnNumber;
            cornerNum = returnNumber;
        }
    }
    return cornerNum;
}

bool cornerExistCheck(char board[26][26], int N, char colour, int deltaRow, int deltaCol) {
    if ((checkLegalIndirection(board, N, 'a', 'a', colour, deltaRow, deltaCol)
            || checkLegalIndirection(board, N, 'a', 'a' + N - 1, colour, deltaRow, deltaCol)
            || checkLegalIndirection(board, N, 'a' + N - 1, 'a', colour, deltaRow, deltaCol)
            || checkLegalIndirection(board, N, 'a' + N - 1, 'a' + N - 1, colour, deltaRow, deltaCol)) == true)
        return true;

    else
        return false;

}

bool positionInBounds(int N, char row, char col) {//to determin that whether the picked position in the board or not
    bool positionInBounds = false;
    int rowNumber, colNumber;
    rowNumber = row - 'a';
    colNumber = col - 'a';
    if ((rowNumber >= 0)&&(rowNumber < N)&&(colNumber >= 0)&&(colNumber < N))
        positionInBounds = true;
    return positionInBounds;

}

bool checkLegalIndirection(char board[26][26], int N, char row, char col, char colour, int deltaRow, int deltaCol) {

    bool positionVacant = false;
    bool directionLeagal = false;
    char diffColor = 'B' + 'W' - colour; //determin the different colour of th picked cheese
    int rowInt = row - 'a', colInt = col - 'a'; //rowInt and colInt mean the position in number form of the next move that player gonner take 


    if (board[rowInt][colInt] == 'U')
        positionVacant = true; // to make sure that the next move must be vacant

    if (positionVacant == true) {
        for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
            for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
            {
                if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                    int newRow = rowInt + deltaRow;
                    int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                    if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                    {
                        if (board[newRow][newCol] == diffColor) {// not the same color
                            while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {//must be the different color and inside the board
                                newRow = newRow + deltaRow;
                                newCol = newCol + deltaCol;

                                if ((board[newRow][newCol] == colour) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                                    directionLeagal = true;
                                    return directionLeagal;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return directionLeagal;
}

void printBoard(char board[26][26], int N) {//print out the whole board
    int row, col;
    char initialLetter = 'a';
    char printedLetter;
    printf("  ");
    for (col = 0; col < N; col++) {
        printedLetter = initialLetter + col;
        printf("%c", printedLetter);
    }
    printedLetter = 0;
    printf("\n");
    for (row = 0; row < N; row++) {
        printedLetter = initialLetter + row;
        printf("%c", printedLetter);
        printf(" ");
        for (col = 0; col < N; col++)
            printf("%c", board[row][col]);
        printf("\n");

    }
}

void changeBoard(char board[26][26], char colour, char row, char col) {// a simple function to change the board with the typed
    int inputRow, inputCol;
    inputRow = row - 'a';
    inputCol = col - 'a';
    board[inputRow][inputCol] = colour;

}

void initinBoard(char board[26][26], int N) {
    int row, col;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++)
            board[row][col] = 'U';
    }
    board[(N / 2) - 1][(N / 2) - 1] = 'W';
    board[(N / 2) - 1][N / 2] = 'B';
    board[N / 2][(N / 2) - 1] = 'B';
    board[N / 2][N / 2] = 'W';
}

bool checkAvailableMove(char colour, int N, char board[26][26], int deltaRow, int deltaCol) {//print out all the available move
    bool existAvailableMove = false;
    char row, col;
    int rowNumber, colNumber;
    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            row = rowNumber + 'a';
            col = colNumber + 'a';
            if ((board[rowNumber][colNumber] == 'U' && checkLegalIndirection(board, N, row, col, colour, deltaRow, deltaCol))) {//using the checkLegalIndirecton
                existAvailableMove = true;
            }
        }
    }
    return existAvailableMove;
}

void changeAndFlip(char board[26][26], char colour, char row, char col, int N, int deltaRow, int deltaCol) {//after receiving a new move, tell it is a valiad move or not, and flip other tail
    char diffColor = 'B' + 'W' - colour;
    int rowInt = row - 'a', colInt = col - 'a';
    int i, j;
    changeBoard(board, colour, row, col);
    for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
        for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
        {
            if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                int newRow = rowInt + deltaRow;
                int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                {
                    if (board[newRow][newCol] == diffColor) {
                        while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                            newRow = newRow + deltaRow;
                            newCol = newCol + deltaCol;

                            if ((board[newRow][newCol] == colour) && (positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))) {//then you find the correct direction and position of the same colour cheese in this line+
                                int rowFlip = rowInt, colFlip = colInt;
                                while ((rowFlip != newRow) || (colFlip != newCol)) {
                                    board[rowFlip][colFlip] = colour;
                                    rowFlip += deltaRow;
                                    colFlip += deltaCol;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}

int countFlip(char board[26][26], char colour, char row, char col, int N, int deltaRow, int deltaCol) {//after receiving a new move, tell it is a valiad move or not, and flip other tail
    char diffColor = 'B' + 'W' - colour;
    int count = 0;
    int rowInt = row - 'a', colInt = col - 'a';
    int i, j;
    for (deltaRow = -1; deltaRow <= 1; deltaRow++) {
        for (deltaCol = -1; deltaCol <= 1; deltaCol++)//thoes two for loop is used to picked the direction that is going to be checked
        {
            if ((deltaRow != 0) || (deltaCol != 0)) {//deltaCol and deltaRow can not be 0 at the same time

                int newRow = rowInt + deltaRow;
                int newCol = colInt + deltaCol; //the position of the next cheese along the picked direction
                if ((positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a'))&&(board[newRow][newCol] != 'U'))//to make sure that this move is not outside the board and vacant
                {
                    if (board[newRow][newCol] == diffColor) {
                        while ((board[newRow][newCol] == diffColor) && positionInBounds(N, (char) newRow + 'a', (char) newCol + 'a')) {
                            newRow = newRow + deltaRow;
                            newCol = newCol + deltaCol;

                            if (board[newRow][newCol] == colour) {//then you find the correct direction and position of the same colour cheese in this line
                                int rowFlip = rowInt, colFlip = colInt;
                                while ((rowFlip != newRow) || (colFlip != newCol)) {
                                    count++;
                                    rowFlip += deltaRow;
                                    colFlip += deltaCol;
                                }
                                count = count - 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return count;
}

void boardConfiguration(char board[26][26], char row, char col, char colour, int N) {//change the board
    printf("Enter board configuration:\n");
    while (colour != '!') {
        scanf(" %c", &colour);
        scanf(" %c", &row);
        scanf(" %c", &col);
        changeBoard(board, colour, row, col);
    }

}

void comMove(char board[26][26], int N, char comColour, int deltaRow, int deltaCol) {
    char row, col, bestRow = 0, bestCol = 0, scoreBoard[26][26];
    int score = 0, rowNumber, colNumber;

    for (rowNumber = 0; rowNumber < N; rowNumber++)//Initial the scoreboard with all the value equal to zero
        for (colNumber = 0; colNumber < N; colNumber++) {
            scoreBoard[rowNumber][colNumber] = 0;
        }
    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            row = rowNumber + 'a';
            col = colNumber + 'a';
            if ((board[rowNumber][colNumber] == 'U') && checkLegalIndirection(board, N, row, col, comColour, deltaRow, deltaCol))
                scoreBoard[rowNumber][colNumber] = countFlip(board, comColour, row, col, N, deltaRow, deltaCol);
        }
    }
    for (rowNumber = 0; rowNumber < N; rowNumber++) {
        for (colNumber = 0; colNumber < N; colNumber++) {
            if ((scoreBoard[rowNumber][colNumber] > score)//get the highest score
                    || ((scoreBoard[rowNumber][colNumber] == score)&&(rowNumber < bestRow - 'a'))//when the score is the same, the best position should be the one that has lower row
                    || ((scoreBoard[rowNumber][colNumber] == score)&&(rowNumber == bestRow - 'a')&&(colNumber < bestCol - 'a'))) {
                score = scoreBoard[rowNumber][colNumber];
                bestRow = rowNumber + 'a';
                bestCol = colNumber + 'a';
            }
        }
    }
    printf("Computer places %c at %c%c.\n", comColour, bestRow, bestCol);
    changeAndFlip(board, comColour, bestRow, bestCol, N, deltaRow, deltaCol);
}

void determineWiner(char board[26][26], int N) {
    int i, j, blackCount = 0, whiteCount = 0;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            if (board[i][j] == 'B')
                blackCount++;
            if (board[i][j] == 'W')
                whiteCount++;
        }
    if (blackCount > whiteCount)
        printf("B player wins.");
    if (blackCount == whiteCount)
        printf("Draw!");
    if (blackCount < whiteCount)
        printf("W player wins.");
}

int main(int argc, char** argv) {
    int N = 0;
    char playerRow, playerCol, comRow, comCol;
    char board[26][26];
    char colour;
    char comColour;
    char playerColour;
    int deltaRow, deltaCol;
    bool validMove;
    printf("Enter the board dimension: ");
    scanf("%d", &N);
    printf("Computer plays (B/W) : ");
    scanf(" %c", &comColour);
    playerColour = 'B' + 'W' - comColour;
    initinBoard(board, N);
    printBoard(board, N);
    validMove = true;
    if (playerColour == 'B') {
        printf("Enter move for colour %c (RowCol): ", playerColour);
        scanf(" %c", &playerRow);
        scanf(" %c", &playerCol);
        if ((positionInBounds(N, playerRow, playerCol)
                && checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)
                && validMove) == true) {
            changeAndFlip(board, playerColour, playerRow, playerCol, N, deltaRow, deltaCol);
            printBoard(board, N);
        } else if ((positionInBounds(N, playerRow, playerCol) &&
                checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)) == false) {//received move is not a legal move
            printf("%c player wins.", comColour);
            validMove = false;
        }
    }

    while ((checkAvailableMove(comColour, N, board, deltaRow, deltaCol)
            || checkAvailableMove(playerColour, N, board, deltaRow, deltaCol)) && validMove) {//one of computer and player has available moves
        if (checkAvailableMove(comColour, N, board, deltaRow, deltaCol)) {//if computer has available move, it give the best move among all available moves 
            evaluateProrityMove(board, N, comColour, deltaRow, deltaCol);
            printBoard(board, N);
        } else if (checkAvailableMove(comColour, N, board, deltaRow, deltaCol) == false) {
            printf("%c player has no valid move.\n", comColour);
        }
        if (checkAvailableMove(playerColour, N, board, deltaRow, deltaCol)) {//if player has available move,program receives a input move 
            printf("Enter move for colour %c (RowCol): ", playerColour);
            scanf(" %c", &playerRow);
            scanf(" %c", &playerCol);
            if ((positionInBounds(N, playerRow, playerCol)
                    && checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)
                    && validMove) == true) {//received move is a legal move 
                changeAndFlip(board, playerColour, playerRow, playerCol, N, deltaRow, deltaCol);
                printBoard(board, N);
            } else if ((positionInBounds(N, playerRow, playerCol) &&
                    checkLegalIndirection(board, N, playerRow, playerCol, playerColour, deltaRow, deltaCol)) == false) {//received move is not a legal move
                printf("Invalid move.\n");
                printf("%c player wins.", comColour);
                validMove = false;

            }
        }
    }

    if (validMove == true)
        determineWiner(board, N);
    return (EXIT_SUCCESS);
}
# lab 8

//
// APS105-F15 Lab 8 Lab8.c
//
// This is a program written to maintain a personal music library,
// using a linked list to hold the songs in the library.
//
// Author: <Your Name Goes Here>
// Student Number: <Your Student Number Goes Here>
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

// A node in the linked list

// Each string in the node is declared as a character pointer variable,
// so they need to be dynamically allocated using the malloc() function,
// and deallocated using the free() function after use.

typedef struct node {
    char *songName;
    char *artist;
    char *genre;
    struct node *link;
} Node;
void getStringFromUserInput(char s[], int arraySize);
void songNameDuplicate(char songName[]);
void songNameFound(char songName[]);
void songNameNotFound(char songName[]);
void songNameDeleted(char songName[]);
void artistFound(char artist[]);
void artistNotFound(char artist[]);
void printMusicLibraryEmpty(void);
void printMusicLibraryTitle(void);

const int MAX_LENGTH = 1024;

Node *newNode(char songName[MAX_LENGTH],char artist[MAX_LENGTH],char genre[MAX_LENGTH], Node *link) {
    Node *t = (Node *) malloc(sizeof (Node));
    
    t->songName = (char *) malloc(MAX_LENGTH * sizeof (char));
    t->artist = (char *) malloc(MAX_LENGTH * sizeof (char));
    t->genre = (char *) malloc(MAX_LENGTH * sizeof (char));
    if (t != NULL) {
        strcpy(t->songName, songName);
        strcpy(t->artist, artist);
        strcpy(t->genre, genre);
        t-> link = link;
    }
    
    return t;
}

Node *insertInOrder(Node *head, char songName[MAX_LENGTH],char artist[MAX_LENGTH],char genre[MAX_LENGTH]) {//insert a new node following the order
    if (head == NULL || strcmp(head->songName, songName) > 0)
        return newNode(songName, artist,genre,head); //a new head of list
    Node *current = head;
    
    while (current->link != NULL && strcmp(songName, current->link->songName) > 0)
        current = current->link;
    current->link = newNode(songName,artist,genre, current->link);
    return head;
}

void printList(Node *head) {//print the whole list
    Node *current = head;
    
    if (current == NULL)
        printf("The music library is empty.");
    else {
        printf("\nMy Personal Music Library:\n");
        while (current != NULL) {
            printf("\n");
            printf("%s\n", current->songName);
            printf("%s\n", current->artist);
            printf("%s\n", current->genre);
            current = current->link;
        }
    }
    
}

bool search(Node *head, char searchKey[MAX_LENGTH]) {//if there exist the node being looked for,return true
    Node *current = head;
    while (current != NULL) {
        if (strcmp(current->songName, searchKey) == 0)
            return true;
        current = current->link;
    }
    
    return false;
}
void searchAndPrint(Node *head, char searchKey[MAX_LENGTH]) {//if there exist the node being looked for,return true
    Node *current = head;
    while (current != NULL) {
        if (strcmp(current->songName, searchKey) == 0){
            printf("%s\n", current->songName);
            printf("%s\n", current->artist);
            printf("%s\n", current->genre);
            
        }
            ;
        current = current->link;
    }
    
    
}
Node *deleteAllNodes(Node *head) {
    while (head != NULL) {
        Node *firstNode = head;
        head = head -> link;
        songNameDeleted(firstNode->songName);
        free(firstNode);
    }
    return NULL;
}

Node *deleteFirstOccurrence(Node *head, char searchKey[MAX_LENGTH]) {
    if (head == NULL)
        return NULL;
    
    // If the first node is to be deleted
    if (strcmp(head -> songName, searchKey) == 0) {
        Node *secondNode = head -> link;
        songNameDeleted(head->songName);
        free(head);
        return secondNode;
    }
    
    bool found = false;
    Node *current = head;
    
    while (!found && current -> link != NULL) {
        if (strcmp(current -> link -> songName, searchKey) == 0)
            found = true;
        else
            current = current -> link;
    }
    
    // if there exists a node to be deleted
    if (current -> link != NULL) {
        Node *nodeToRemove = current -> link;
        current -> link = current -> link -> link;
        songNameDeleted(nodeToRemove->songName);
        free(nodeToRemove);
    }
    
    return head;
}

int main(void) {
    Node *head;
    head = NULL;
    char *songName;
    char *artist, *genre;
    
    artist = (char *) malloc(MAX_LENGTH * sizeof (char));
    genre = (char *) malloc(MAX_LENGTH * sizeof (char));
    songName = (char*) malloc(MAX_LENGTH * sizeof (char));
    
    
    printf("%s", "Personal Music Library.\n\n");
    printf("%s", "Commands are I (insert), D (delete), S (search by song name),\n"
           "P (print), Q (quit).\n");
    
    char response;
    char input[MAX_LENGTH + 1];
    do {
        printf("\nCommand?: ");
        getStringFromUserInput(input, MAX_LENGTH);
        response = toupper(input[0]);
        
        if (response == 'I') {
            printf("Song name: ");
            getStringFromUserInput(songName, MAX_LENGTH);
            printf("Artist: ");
            getStringFromUserInput(artist, MAX_LENGTH);
            printf("Genre: ");
            getStringFromUserInput(genre, MAX_LENGTH);
            
            if (search(head, songName) == false) {
                head = insertInOrder(head, songName,artist,genre);
            } else
                songNameDuplicate(songName);
        } else if (response == 'D') {
            
            
            printf("\nEnter the name of the song to be deleted: ");
            getStringFromUserInput(songName, MAX_LENGTH);
            head = deleteFirstOccurrence(head, songName);
            
            
        } else if (response == 'S') {
            
            printf("\nEnter the name of the song to search for: ");
            getStringFromUserInput(songName, MAX_LENGTH);
            if (search(head, songName)){
                songNameFound(songName);
                searchAndPrint(head, songName);
            }
            else
                songNameNotFound(songName);
        } else if (response == 'P') {
            printList(head);
        } else if (response == 'Q') {
            
        } else {
            printf("\nInvalid command.\n");
        }
    } while (response != 'Q');
    head = deleteAllNodes(head);
    printList(head);
    
    return 0;
}

// Support Function Definitions

// Prompt the user for a string safely, without buffer overflow

void getStringFromUserInput(char s[], int maxStrLength) {
    int i = 0;
    char c;
    
    while (i < maxStrLength && (c = getchar()) != '\n')
        s[i++] = c;
    
    s[i] = '\0';
}

// Function to call when the user is trying to insert a song name
// that is already in the personal music library.

void songNameDuplicate(char songName[]) {
    printf("\nA song with the name '%s' is already in the music library.\n"
           "No new song entered.\n", songName);
}

// Function to call when a song name was found in the personal music library.

void songNameFound(char songName[]) {
    printf("\nThe song name '%s' was found in the music library.\n",
           songName);
}

// Function to call when a song name was not found in the personal music library.

void songNameNotFound(char songName[]) {
    printf("\nThe song name '%s' was not found in the music library.\n",
           songName);
}

// Function to call when a song name that is to be deleted
// was found in the personal music library.

void songNameDeleted(char songName[]) {
    printf("\nDeleting a song with name '%s' from the music library.\n",
           songName);
}

// Function to call when printing an empty music library.

void printMusicLibraryEmpty(void) {
    printf("\nThe music library is empty.\n");
}

// Function to call to print a title when the entire music library is printed.

void printMusicLibraryTitle(void) {
    printf("\nMy Personal Music Library: \n");
}








#lab 9
/*
 * File:   main.c
 * Author: yangjiaw
 *
 * Created on November 30, 2015, 6:09 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LIBRARY_SIZE 100
#define MAX_LENGTH 1024

typedef struct song {
    char songName[MAX_LENGTH];
    char artist[MAX_LENGTH];

} Song;



void getStringFromUserInput();
void initialize();
void insertNewSong(Song Library[MAX_LIBRARY_SIZE], char songName[MAX_LENGTH], char artist[MAX_LENGTH]);
void printLibrary(Song Library[MAX_LIBRARY_SIZE]);
void cocktailSort(Song library[], int size);
bool inRightOrder(Song library[], int size);

int main(int argc, char** argv) {
    Song Library[MAX_LIBRARY_SIZE];
    initialize();
    char response;
    char songName[MAX_LENGTH], artist[MAX_LENGTH];
    char input[MAX_LENGTH + 1];
    do {
        printf("\nCommand?: ");
        getStringFromUserInput(input, MAX_LENGTH);
        response = toupper(input[0]);

        if (response == 'I') {
            printf("Song name: ");
            getStringFromUserInput(songName, MAX_LENGTH);
            printf("Artist: ");
            getStringFromUserInput(artist, MAX_LENGTH);
            insertNewSong(Library, songName, artist);
        } else if (response == 'S') {
            cocktailSort(Library, MAX_LENGTH);

        } else if (response == 'P') {
            printLibrary(Library);

        } else if (response == 'Q') {
            ; // do nothing, we'll catch this below
        } else {

            printf("\nInvalid command.\n");
        }
    } while (response != 'Q');


    return (EXIT_SUCCESS);
}

void getStringFromUserInput(char s[], int maxStrLength) {
    int i = 0;
    char c;

    while (i < maxStrLength && (c = getchar()) != '\n')
        s[i++] = c;

    s[i] = '\0';
}

void initialize() {

    printf("%s", "Personal Music Library.\n\n");
    printf("%s", "Commands are I (insert), S (sort by artist),\n"
            "P (print), Q (quit).\n");

}

void insertNewSong(Song Library[MAX_LIBRARY_SIZE], char songName[MAX_LENGTH], char artist[MAX_LENGTH]) {
    int n = 0;
    bool insertSuccess = false;
    do {
        if (Library[n].songName[0] == '\0') {
            strcpy(Library[n].songName, songName);
            strcpy(Library[n].artist, artist);
            insertSuccess = true;
        } else
            n++;


    } while (n < MAX_LIBRARY_SIZE && insertSuccess == false);

};

void printLibrary(Song Library[MAX_LIBRARY_SIZE]) {
    int n = 0;
    if (Library[0].songName[0] == '\0')
        printf("\nThe music library is empty.\n");
    else {
        printf("My Personal Music Library:\n");
        do {


            printf("\n%s\n", Library[n].songName);
            printf("%s\n", Library[n].artist);

            n++;
        } while (n < MAX_LENGTH && Library[n].songName[0] != '\0');
    }
}

bool inRightOrder(Song library[], int size) {
    int c=0;
    if (library[c].artist[0] != '\0') {
         
            while(library[c+1].artist[0] != '\0'){
            if ((strcmp(library[c].artist, library[c + 1].artist) > 0) || ((strcmp(library[c].artist, library[c + 1].artist)) == 0 && (strcmp(library[c].songName, library[c + 1].songName) > 0)))
                return false;
            c++;
            
        }
    }



    return true;
}

void cocktailSort(Song library[], int size) {
    int i;
    Song temp1;

    while (inRightOrder(library, size) == false) {
        i = 0;
        while (library[i + 1].songName[0] != '\0') {//reach the end
            if (strcmp(library[i].artist, library[i + 1].artist) > 0) {
                temp1 = library[i];
                library[i] = library[i + 1];
                library[i + 1] = temp1;


            } else if (strcmp(library[i].artist, library[i + 1].artist) == 0 && (strcmp(library[i].songName, library[i + 1].songName) > 0)) {
                temp1 = library[i];
                library[i] = library[i + 1];
                library[i + 1] = temp1;
            }
            i++;
        }

        if (inRightOrder(library, size) == false) {

            i = size;

            while (i == 1) {
                if (strcmp(library[i].artist, library[i - 1].artist) < 0) {
                    temp1 = library[i];
                    library[i] = library[i - 1];
                    library[i - 1] = temp1;
                } else if (strcmp(library[i].artist, library[i - 1].artist) == 0 && (strcmp(library[i].songName, library[i - 1].songName) < 0)) {
                    temp1 = library[i];
                    library[i] = library[i - 1];
                    library[i - 1] = temp1;

                }
                i--;
            }
        }
    }

    printLibrary(library);
}


#done

