//
//  APNumberBitsOutput.c
//  StartC
//
//  Created by Aleksandr Poliakov on 14.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APNumberBitsOutput.h"

void APShowNumberInBits(int someNumber){
    int j = 0;
    int numBitsInInt = 0;
    
    j = numBitsInInt = sizeof(int) * 8;
    char *Arr;
    Arr = (char *) calloc(numBitsInInt, sizeof(char));
    
    int i = 0;
    while (i < j) {
        Arr[i] = someNumber & 1;
        someNumber = someNumber >> 1;
        ++i;
    }
    
    for (i = numBitsInInt - 1; i >= 0; --i) {
        if (Arr[i]) {
            printf("%c", '1');
        }else{
            printf("%c", '0');
        }
    }
    printf("\n\v");
    free(Arr);
}

