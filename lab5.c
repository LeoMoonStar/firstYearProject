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