/*Ben Cradick
 * cs 2750 PA
 * 11-19-2017
 * */
#include "func.h"
#include <stdlib.h>
int main(int argc, char *argv[]){
    int total = 0;

    if(argc > 200){
         //capping the maximum number of command line arguments at 200
        printf("\nToo many arguments\n");
        return 0;
    }

    int i = 0;

    for(i = 0; i < argc; i++){
        /*strtol converts whatever it recieves as input to long int which I cast to int
         *if an input is not an integer it returns a 0 which doesn't affect our end goal here.
         */
        total += (int)strtol(argv, 10);
    }
}

