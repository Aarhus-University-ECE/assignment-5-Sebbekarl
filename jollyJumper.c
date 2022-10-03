#include "jollyjumper.h"
#include <stdbool.h>
#include <stdio.h>
#include <malloc.h>



int isJollyJumber(const int seq[], int size) {

    //creates a boolean array of size-1 to keep track of which gaps has been found
    bool *diffs_found = malloc((size-1)*sizeof(bool));

    //defines all elements to be false
    for(int i = 0;i < size-1; i++){
        diffs_found[i] = false;
    }

    //calculates the gaps and sets the found gaps to true in the array
    for(int i = 1; i < size; i++){
        
        int diff = abs(seq[i]-seq[i-1]);

        if(diff < size){
            diffs_found[diff-1] = true;
        }   
    }

    //checks if all gaps are present
    for(int i = 0;i < size-1; i++){
        
        if(diffs_found[i] == false){
            return false;
        }
    }
    
    return true;
}
