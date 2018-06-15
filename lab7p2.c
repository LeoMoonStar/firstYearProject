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