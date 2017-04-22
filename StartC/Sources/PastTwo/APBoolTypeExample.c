//
//  APBoolTypeExample.c
//  StartC
//
//  Created by Aleksandr Poliakov on 11.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APBoolTypeExample.h"

void APsomeExamplesBool(bool trueOrFalse) {
    if (trueOrFalse != 0) {
        printf("true\n\v");
        return;
    }
    printf("false\n\v");
}

void APSomeMathLogicOperations(int paramOne, int paramTwo){
    const int count = 4;
    bool bools[count] = {
        paramOne > paramTwo,
        paramOne < paramTwo,
        paramOne != paramTwo,
        paramTwo == paramOne
    };
    for (int i = 0; i< count; i++) {
        APsomeExamplesBool(bools[i]);
    }
}

// Ternary Operator

void APSomeTernaryOperation(int paramTernaryOne, int paramTernaryTwo) {
    (paramTernaryOne >= paramTernaryTwo) ? printf("mama\n\v") : printf("papa\n\v");
}

void APSomeIfElseOperation(int paramIfElseOne, int paramIfElseTwo){
    if (paramIfElseOne >= paramIfElseTwo) {
        printf("mama\n\v");
    }else{
        printf("papa\n\v");
    }
}







