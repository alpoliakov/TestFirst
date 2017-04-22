//
//  APStructureArray.c
//  StartC
//
//  Created by Aleksandr Poliakov on 14.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APStructureArray.h"

static const size_t APDefaultLength = 100;

APStructureArray *APStructereArrayCreate() {
    APStructureArray *array = (APStructureArray*)calloc(1, sizeof(*array));
    APStructureArrayRetain(array);
    APStructureArraySetLength(array, APDefaultLength);
        return array;
}

void APStructureArrayRetain(APStructureArray *array) {
    array->refCount += 1;
}

void APStructereArrayRelease(APStructureArray *array) {
    size_t count = array->refCount - 1;
    array->refCount = count;
    if (!count) {
        APStructureArraySetLength(array, 0);
        free(array);
    }
}

void *APStructureArrayGetData(APStructureArray *array) {
    return array -> markAuto;
}

size_t APStructureArrayGetLength(APStructureArray *array) {
    return array -> length;
}

void APStructureArraySetLength(APStructureArray *array, size_t length) {
    size_t currentLength = array->length;
    if (currentLength == length) {
        return;
    }
    
    array->markAuto = realloc(array->markAuto, length);
    
    if (currentLength < length) {
        memset(array->markAuto + currentLength, 0, length - currentLength);
    }
    array->length = length;
}

void APFunctionStructereArray() {
    printf("Size APStructureArrayTest: %zd\n\v", sizeof(APStructureArray));
}

void APTestForStructureArray() {
    APStructureArray *array = APStructureArrayCreate();
    APStructureArraySetLength(array, 200);
    void *markAuto = APStructureArrayGetData(array);
    *(char *)markAuto = 15;
    char x = *(char *)markAuto;
    APStructureArrayRelease(array);
    APFunctionStructereArray();
}

