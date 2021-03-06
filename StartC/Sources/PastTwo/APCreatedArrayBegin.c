//
//  APCreatedArrayBegin.c
//  StartC
//
//  Created by Aleksandr Poliakov on 16.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APCreatedArrayBegin.h"

void APExampleCreateArrayBeginner(){
    int someArrayOne[] = {15, 12, 46, 57, 88, 100};
    int someArrayTwo[] = {12, 36, 25, 54, 77};
    int someArrayThree[3] = {33, 44, 55};
    int sizeSomeArrayTwo = sizeof(someArrayTwo) / sizeof(*someArrayTwo);
    
    int *values = someArrayOne;
    for (int j = 0; j <= 5; j++) {
        printf("%d\t", values[j]);
    }
    printf("\n\v");
    
    int i = 0;
    while (i < sizeSomeArrayTwo) {
        printf("%d\t", someArrayTwo[i]);
        i +=1;
    }
    printf("\n\v");
    
    int count = 0;
    do {
        printf("%d\t", someArrayThree[count]);
        count += 1;
    } while (count < 3);
    printf("\n\v");
    
    int shortArray[3] = {4, 5, 7, 9, 5};
    int sizeShortArray = sizeof(shortArray) / sizeof(shortArray[0]);
    for (int k = 0; k < sizeShortArray; k++) {
        printf("%d\t", shortArray[k]);
    }
    printf("\n\v");
    
    int longArray[5] = {2, 3, 1,};
    int sizeLongArray = sizeof(longArray) / sizeof(longArray[0]);
    for (int num = 0; num < sizeLongArray; num++) {
        printf("%d\t", longArray[num]);
    }
    printf("\n\v");
}

//int pointerByte;
//pointerByte = (int *) APPointerMyFirstStructure;
//
//int i = 0;
//while(i < sizeof(AP_MyFirstStructure)) {
//    printf("[%02d] %02X\n", i, pointerByte[i]);
//    ++i;
//}

