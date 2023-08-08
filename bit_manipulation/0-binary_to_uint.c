#include "main.h"

unsigned int binary_to_uint(const char *b) 
{
    if (b == NULL)
        return (0);

    unsigned int result = 0; // Move the declaration here
    int i; // Declare 'i' here
    for (i = 0; b[i] != '\0'; i++) {
        char digit = b[i];
        if (digit == '0' || digit == '1') {
            result = (result << 1) + (digit - '0');
        } else {
            return (0); /* Invalid character found*/
        }
    }

    return (result);
}
