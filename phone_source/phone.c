//Ben Cradick
//cs2750 Pa5
//November 19 2017
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phone_fmt.h"


//TODO: COMMENT EVERYTHING
int main(){
    char phoneNumber[200];
    int len;
    printf("\nPlease enter a 10 digit phone number(3 digit area code + 7 digit phone number):\t");

    fgets(phoneNumber, 200, stdin);
    if (phoneNumber[strlen(phoneNumber)-1] != '\n') {
        int len = 0;
        while (fgetc(stdin) != '\n') {
            len++;
        }
        if(len > 0){
            printf("Too many characters entered into the field\n");
        }
    }
    else{
        phoneNumber[strlen(phoneNumber)-1] = '\0';
    }

    len = (int)strlen(phoneNumber);
    formatNumber(len, phoneNumber);




}

