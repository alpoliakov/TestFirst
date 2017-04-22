//
//  APTrainyCreateMacro.h
//  StartC
//
//  Created by Aleksandr Poliakov on 16.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#ifndef APTrainyCreateMacro_h
#define APTrainyCreateMacro_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

void APFounctionOutputSizeStructure();
void APFounctionOutputOffsetStructure();

#define APGeneratePrintSizeStructure(type, name, formatter) \
    void APOutput_##type(type value) { \
        printf(#type" "#name " size = "formatter";" "\n", value); \
}

#define APCallPrintSizeStructureFunction(type, namePointer, name) \
    APOutput_##type(sizeof(namePointer->name))

#define APPlaceStructureElements(namePointer, name) \
    printf("offset: "#name " - %zd\n", offsetof(namePointer, name));\

struct APUnionStructure {
    char *pointerOnString;
    double someDoubleUnion;
    int someIntUnion;
    float someFloatUnion;
    short someShort1Union;
    short someShort2Union;
    union {
        struct {
            bool someBoolUnion1: 1;
            bool someBoolUnion2: 1;
        }flags;
    }itFieldsBool;
};

#endif /* APTrainyCreateMacro_h */
