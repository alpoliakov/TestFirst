//
//  APStructureArray.c
//  StartC
//
//  Created by Aleksandr Poliakov on 14.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APStructureArray.h"

static const size_t APDefaultLength = 100;

APStructereArray *APStructereArrayCreate(){
    APStructereArray *array = (APStructereArray*)calloc(1, sizeof(*array));
    APStructereArrayRetain(array);
    APStructereArraySetLength(array, APDefaultLength);
        return array;
}

void APStructereArrayRetain(APStructereArray *array){
    array->refCount += 1;
}

void APStructereArrayRelease(APStructereArray *array){
    size_t count = array->refCount - 1;
    array->refCount = count;
    if (!count) {
        APStructereArraySetLength(array, 0);
        free(array);
    }
}

void *APStructereArrayGetData(APStructereArray *array){
    return array -> markAuto;
}

size_t APStructereArrayGetLength(APStructereArray *array){
    return array -> length;
}

void APStructereArraySetLength(APStructereArray *array, size_t length){
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

void APFunctionStructereArray(){
    printf("Size APStructereArrayTest: %zd\n\v", sizeof(APStructereArray));
}

