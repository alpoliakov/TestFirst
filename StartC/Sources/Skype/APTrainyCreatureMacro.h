//
//  APTrainyCreatureMacro.h
//  StartC
//
//  Created by Aleksandr Poliakov on 16.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#ifndef APTrainyCreatureMacro_h
#define APTrainyCreatureMacro_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

void APOutputSizeStructure(void);

struct ExampleStructure {
    char *pointerOnString;
    long long someLongLong;
    double someDouble;
    int someInt;
    float someFloat;
    short someShort1;
    short someShort2;
    short someShort3;
    union {
        struct {
            bool someBool1: 1;
            bool someBool2: 1;
            bool someBool3: 1;
            bool someBool4: 1;
            bool someBool5: 1;
            bool someBool6: 1;
        }flags;
    }bitFieldsBool;
};

#define APGeneratPrintFunction(type, formatter) \
    void APoutput_##type(type value) { \
    printf(#type " size = "#formatter";" "\n", value); \
}

#define APCallPrintFunction(type, value) \
    APoutput_##type(value)




#endif /* APTrainyCreatureMacro_h */
