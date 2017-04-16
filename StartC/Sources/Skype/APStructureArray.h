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

struct APStructereArray {
    size_t refCount;
    void *markAuto;
    size_t length;
};

typedef struct APStructereArray APStructereArray;

APStructereArray *APStructereArrayCreate(void);

void APStructereArrayRetain(APStructereArray *array);

void APStructereArrayRelease(APStructereArray *array);

void *APStructereArrayGetData(APStructereArray *array);

void APStructereArraySetLength(APStructereArray *array, size_t length);

size_t APStructereArrayGetLength(APStructereArray *array);

void APFunctionStructereArray();


#endif /* APStructureArray_h */
