#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define INPUT_LENGTH 30
#define ALPHABET 25

int main () {

    bool condition=true;
    
    char smallAlpha[ALPHABET];
    char bigAlpha[ALPHABET];
    
    while(condition) {
        char word[INPUT_LENGTH+1];
        
        printf("Please Enter your Word for Hangman\n");
        scanf("%s", word);

        /*Check if Chars are only Alphabet*/
        for(int i=0; i<strlen(word); i++) {
            if((word[i]<'a' || word[i]>'z') && (word[i]<'A' || word[i]>'Z')) {
                printf("Only alphabet allowed\n");
                condition=true;
                break;
            } else {
                condition=false;
            }
        }





    }

    

    printf("END OF WHILE");

    printf("Das ist der Wetter Branch");
    
    return 0;
}