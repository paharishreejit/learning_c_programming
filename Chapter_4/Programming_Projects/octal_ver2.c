/************************************************************************************
 * Name: octal_ver2.c                                                               *
 * Purpose: Converts a decimal number to octal number and prints it to the console. *
 * It is quite good at printing large octal numbers.                                *
 * Author: Shreejit Pahari                                                          *
 ************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int initSize = 0;

long* resizeArray(long* arr) {
    arr = (long*) realloc(arr, initSize * 2 * sizeof(long));
    initSize *= 2;
    return arr;
}

long* convertToOctal(long decimal) {
 
    long temp = decimal;
    long* octal = (long*) calloc(10, sizeof(long));
    initSize = 10;
    int index = 0;
    
    while(temp > 0) {
        int octalDigit = temp % 8;
        
        // Dynamically resizing the array    
        if (index >= initSize) {
            octal = resizeArray(octal);
        }
        
        *(octal + index++) = octalDigit;

        temp /= 8;
    }

    return octal;
}

void printOctal(long* octal) {
    // Finding the index of first non-zero number
    int nonZeroElementIndex = 0;
    for (int i = initSize - 1; i >= 0; i--) {
        if (*(octal + i) != 0) {
              nonZeroElementIndex = i;
              break;
        }
    }
    
    // Printing the octal equivalent
    printf("In octal, you number is: ");
    for (int i = nonZeroElementIndex; i >= 0; i--) {
        printf("%ld", octal[i]);
    }
}

int main(void) {
    printf("Enter a number: ");
    long decimal;
    scanf("%ld", &decimal);
    
    long* octal = convertToOctal(decimal);
    printOctal(octal);
    free(octal);
            
    return 0;
}
