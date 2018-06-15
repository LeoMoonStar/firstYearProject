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