//
//  APFirstWorkWithStructure.h
//  StartC
//
//  Created by Aleksandr Poliakov on 14.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#ifndef APFirstWorkWithStructure_h
#define APFirstWorkWithStructure_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

struct AP_MyFirstStructure {
    char *pointerOnString;
    long long someLongLong;
    double someDouble;
    int someInt;
    float someFloat;
    short someShort1;
    short someShort2;
    short someShort3;
    bool someBool1;
    bool someBool2;
    bool someBool3;
    bool someBool4;
    bool someBool5;
    bool someBool6;
};

struct AP_FirstUnionStructure {
    char *pointerOnStringUnion;
    long long someLongLongUnion;
    double _someDoubleUnion;
    int someIntUnion;
    float someFloatUnion;
    short someShort1Union;
    short someShort2Union;
    short someShort3Union;
    union {
        struct {
            bool someBoolUnion1: 1;
            bool someBoolUnion2: 1;
            bool someBoolUnion3: 1;
            bool someBoolUnion4: 1;
            bool someBoolUnion5: 1;
            bool someBoolUnion6: 1;
        }flags;
        char bitFieldsBool;
    };
};

void APFunctionMyFirstStructure();
void APStructureAndUnionTest();

#endif /* APFirstWorkWithStructure_h */
