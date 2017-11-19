//Ben Cradick
//cs2750 Pa5
//11-19-2017

#include "func.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void checkString(char *argv[], int argc, int current){
    char *endptr;
    if(*argv[current] != '0' && strtol(argv[current], &endptr, 10) == 0){
        int i;

        for(i = current+1; i < argc; i ++){
            if(strstr(argv[i], argv[current])){
                printf("\n%s is a substring of %s\n", argv[current], argv[i]);
            }
        }
    }
}