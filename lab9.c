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


