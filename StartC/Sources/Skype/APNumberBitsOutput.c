//
//  APNumberBitsOutput.c
//  StartC
//
//  Created by Aleksandr Poliakov on 14.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

// Correct variant

#include "APNumberBitsOutput.h"

static const int KAPBitsInByte = 8;

void APFunctionOutputNumberInBits(void *adressByte, size_t size) {
    for (int index = 0; index < size ; index++) {
        char byte = ((char *)adressByte)[size - index -1];
        APFunctionOutputOneBit(&byte);
    }
    printf("\v");
}

void APFunctionOutputOneBit(char *adressByte) {
    uint8_t value = *adressByte;
    for (int shift = KAPBitsInByte; shift > 0; shift--) {
        uint8_t shiftValue = value >> (shift -1);
        printf("%d", shiftValue & 1);
    }
    printf("\n");
}

void APTestForOutputNumberInBits(){
    int some = 10.00;
    APFunctionOutputNumberInBits(&some, sizeof(some));
}

// Old variant

static const int APKAPBitsInByte = 8;
typedef int type;

void APShowNumberInBits(type value) {
    int j = 0;
    int numBitsInNum = 0;
    j = numBitsInNum = sizeof(type) * APKAPBitsInByte;
    char *arrForBits;
    arrForBits = (char *) calloc(numBitsInNum, sizeof(char));
    int i = 0;
    while (i < j) {
        arrForBits[i] = value & 1;
        value >>= 1;
        ++i;
    }
    for (i = numBitsInNum - 1; i >= 0; --i) {
        if (arrForBits[i]) {
            printf("%c", '1');
        } else {
            printf("%c", '0');
        }
    }
    printf("\n\v");
    free(arrForBits);
}



