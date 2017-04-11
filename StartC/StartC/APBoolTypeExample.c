//
//  APBoolTypeExample.c
//  StartC
//
//  Created by Aleksandr Poliakov on 11.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APBoolTypeExample.h"

void APsomeExamplesBool(bool trueOrFalse){
    if (trueOrFalse != 0) {
        printf("true\n\v");
        return;
    }
    
    printf("false\n\v");
}

void APsomeMathLogicOperations(int paramOne, int paramTwo){
    if (paramOne > paramTwo) {
        APsomeExamplesBool(true);
    }else{
        APsomeExamplesBool(false);
    }
    if (paramOne < paramTwo) {
        APsomeExamplesBool(true);
    }else{
        APsomeExamplesBool(false);
    }
    if (paramOne != paramTwo) {
        APsomeExamplesBool(true);
    }else{
        APsomeExamplesBool(false);
    }
    if (paramTwo == paramOne) {
        APsomeExamplesBool(true);
    }else{
        APsomeExamplesBool(false);
    }
    
}

// Ternary Operator

void APSomeTernaryOperation(int paramTernaryOne, int paramTernaryTwo){
    (paramTernaryOne >= paramTernaryTwo) ? printf("mama\n\v") : printf("papa\n\v");
}

void APSomeIfElseOperation(int paramIfElseOne, int paramIfElseTwo){
    if (paramIfElseOne >= paramIfElseTwo) {
        printf("mama\n\v");
    }else{
        printf("papa\n\v");
    }
}

// Array

void APSomeExampleArray(){
    int someArrayOne[] = {15, 12, 46, 57, 88, 100};
    int someArrayTwo[] = {12, 36, 25, 54, 77};
    int someArrayThree[3] = {33, 44, 55};
    int sizeSomeArrayTwo = sizeof(someArrayTwo)/sizeof(someArrayTwo[0]);
    
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
    do{
        printf("%d\t", someArrayThree[count]);
        count += 1;
    }while (count < 3);
    printf("\n\v");
    
    int shortArray[3] = {4, 5, 7, 9, 5};
    int sizeShortArray = sizeof(shortArray)/sizeof(shortArray[0]);
    for (int k = 0; k < sizeShortArray; k++) {
        printf("%d\t", shortArray[k]);
    }
    printf("\n\v");
    
    int longArray[5] = {2, 3, 1,};
    int sizeLongArray = sizeof(longArray)/sizeof(longArray[0]);
    for (int num = 0; num < sizeLongArray; num++) {
        printf("%d\t", longArray[num]);
    }
    printf("\n\v");
}






