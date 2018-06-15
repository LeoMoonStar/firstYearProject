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
