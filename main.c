/*Ben Cradick
 * cs 2750 PA5
 * 11-19-2017
 * */
#include "func.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    long total = 0;
    char *endptr;

    if(argc > 200){
         //capping the maximum number of command line arguments at 200
        printf("\nToo many arguments\n");
        return 0;
    }

    int i = 0;

    for(i = 1; i < argc; i++){
        /*strtol converts whatever it receives as input to long int which I cast to int
         *if an input is not an integer it returns a 0 which doesn't affect our end goal here.
         */

        total += strtol(argv[i], &endptr, 10);

    }
    printf("\n%s\t%ld\n", "Total of all arguments:", total);
    int subStrings;

    //going to check to see if the current string is a substring of future inputs.

    for(subStrings = 1; subStrings < argc; subStrings++) {
        checkStrings( argc, argv, subStrings);
    }
}

