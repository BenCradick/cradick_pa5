//Ben Cradick
//cs2750 Pa5
//11-19-2017
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/* void checkString(int argc, char* argv[argc], int currentArg)
 * Function takes in the total number of arguments (argc),
 * all the different arguments as pointer to an array *argv[argc]
 * and finally the location of the current substring to be searched for (current)
 *
 * 1) char *endptr is a required character pointer for strtol to function
 * 2) strtol returns 0 for non integer characters so we check to see if the current string isn't legitimately '0'
 * 3) If it is we loop through the array of character arrays
 * 4) strstr is used to check our current string to see if it is a substring of a future string, if it is
 * we print out a line that says "\n {{current_string}} is a substring of {{future_string}} \n"
 */
#ifndef CRADICK_PA5_FUNC_H
#define CRADICK_PA5_FUNC_H
void checkString( int argc, char* argv[argc], int currentArg);
#endif //CRADICK_PA5_FUNC_H
