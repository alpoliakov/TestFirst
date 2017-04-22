//
//  APStructureArray.h
//  StartC
//
//  Created by Aleksandr Poliakov on 14.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#ifndef APStructureArray_h
#define APStructureArray_h

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "strings.h"

struct APStructureArray {
    size_t refCount;
    void *markAuto;
    size_t length;
};

void APTestForStructureArray();

typedef struct APStructureArray APStructureArray;

APStructureArray *APStructureArrayCreate(void);

void APStructureArrayRetain(APStructureArray *array);

void APStructureArrayRelease(APStructureArray *array);

void *APStructureArrayGetData(APStructureArray *array);

void APStructureArraySetLength(APStructureArray *array, size_t length);

size_t APStructureArrayGetLength(APStructureArray *array);

void APFunctionStructureArray();


#endif /* APStructureArray_h */
