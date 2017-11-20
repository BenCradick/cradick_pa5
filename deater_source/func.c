//Ben Cradick
//cs2750 Pa5
//11-19-2017

#include "func.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void checkString(int argc,char *argv[argc], int current){
    //1) char *endptr is a required character pointer for strtol to function
    char *endptr;
    //2) strtol returns 0 for non integer characters so we check to see if the current string isn't legitimately '0'
    if(*argv[current] != '0' && strtol(argv[current], &endptr, 10) == 0){//2)
        int i;
        //3) If it is we loop through the array of character arrays
        for(i = current+1; i < argc; i ++){
            //4) strstr is used to check our current string to see if it is a substring of a future string, if it is
            //we print out a line that says "\n {{current_string}} is a substring of {{future_string}} \n"
            if(strstr(argv[i], argv[current])){
                printf("\n%s is a substring of %s\n", argv[current], argv[i]);
            }
        }
    }
}