//
// Created by Ben Cradick on 11/20/17.
//

#include "phone_fmt.h"
#include <string.h>
#include <stdlib.h>
void formatNumber(int len, char* input[len]){
    char phoneNumber[13];
    int count = 0;
    int digits = 0;
    while(digits < 13){
        if(input[count] == '\0') {
            printf("Not enough digits for a complete number where entered\n need %d more numbers", (13 - digits));
            digits = 13;
        }

        else if(atoi(input[count]) == 0 && input[count] != '0'){
            count++;
        }

        else if(digits == 0){
            phoneNumber[0] = '(';
            digits++;
        }

        else if(digits == 4){
            phoneNumber[4] = ')';
            digits++;
        }

        else if(digits == 9){
            phoneNumber[9] = '-';
            digits++;
        }

        else if(input[count] == '0'){
            phoneNumber[digits] = input[count];
            digits++;
            count++;
        }

        else if(atoi(intput[count]) != 0){
            phoneNumber[digits] = input[count];
            count++;
            digits++;
        }

    }

}