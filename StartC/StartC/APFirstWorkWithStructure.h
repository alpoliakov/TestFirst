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
    short someShort1;
    short someShort2;
    short someShort3;
    int someInt;
    float someFloat;
    long long someLongLong;
    double someDouble;
    bool someBool1;
    bool someBool2;
    bool someBool3;
    bool someBool4;
    bool someBool5;
    bool someBool6;
    
};


struct AP_FirstUnionStructure {
    char *_pointerOnString;
    long long _someLongLong;
    double _someDouble;
    int _someInt;
    float _someFloat;
    short _someShort1;
    short _someShort2;
    short _someShort3;
    union {
        struct {
            bool _someBool1;
            bool _someBool2;
            bool _someBool3;
            bool _someBool4;
            bool _someBool5;
            bool _someBool6;

        };
        char bitFieldsBool;
    };
    
    
};


void APFunctionMyFirstStructure();
void APStructureAndUnionTest();

#endif /* APFirstWorkWithStructure_h */
