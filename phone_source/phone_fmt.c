#include "phone_fmt.h"
#include <stdio.h>
#include <ctype.h>
void formatNumber(int len, char input[len]){
    char phoneNumber[14];
    int count = 0;
    int digits = 0;
    while(digits < 13){

        if(input[count] == '\0') {
            printf("Not enough digits for a complete number where entered\n need %d more numbers", (13 - digits));
            digits = 13;
        }



        else if(digits == 0){
            phoneNumber[0] = '(';
            digits++;
        }

        else if(digits == 4){
            phoneNumber[4] = ')';
            digits++;
        }

        else if(digits == 8){
            phoneNumber[8] = '-';
            digits++;
        }

        else if(input[count] == '0'){
            phoneNumber[digits] = input[count];
            digits++;
            count++;
        }

        else if(isdigit(input[count]) != 0){
            phoneNumber[digits] = input[count];
            count++;
            digits++;
        }
        else if(!isdigit(input[count]) && input[count] != '0'){
            count++;
        }
        else{
            printf("ending up here somehow");
        }
    }
    printf("%s\n",phoneNumber);

}