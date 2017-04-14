//
//  APFirstWorkWithStructure.c
//  StartC
//
//  Created by Aleksandr Poliakov on 14.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APFirstWorkWithStructure.h"




typedef struct AP_MyFirstStructure AP_MyFirstStructure;


void APFunctionMyFirstStructure(){
    AP_MyFirstStructure *APPointerMyFirstStructure;
    //APPointerMyFirstStructure = malloc(sizeof(AP_MyFirstStructure));
    
    printf("Size:\n pointerOnString = %zd\n someShort1 = %zd\n someShort2 = %zd\n someShort3 = %zd\n someInt = %zd\n someFloat = %zd\n someLongLong = %zd\n someDouble = %zd\n someBool1 = %zd\n someBool2 = %zd\n someBool3 = %zd\n someBool4 = %zd\n someBool5 = %zd\n someBool6 = %zd\n\v",
           sizeof(APPointerMyFirstStructure -> pointerOnString),
           sizeof(APPointerMyFirstStructure -> someShort1),
           sizeof(APPointerMyFirstStructure -> someShort2),
           sizeof(APPointerMyFirstStructure -> someShort3),
           sizeof(APPointerMyFirstStructure -> someInt),
           sizeof(APPointerMyFirstStructure -> someFloat),
           sizeof(APPointerMyFirstStructure -> someLongLong),
           sizeof(APPointerMyFirstStructure -> someDouble),
           sizeof(APPointerMyFirstStructure -> someBool1),
           sizeof(APPointerMyFirstStructure -> someBool2),
           sizeof(APPointerMyFirstStructure -> someBool3),
           sizeof(APPointerMyFirstStructure -> someBool4),
           sizeof(APPointerMyFirstStructure -> someBool5),
           sizeof(APPointerMyFirstStructure -> someBool6));
    
    
    
    
    printf("Offsets:\n pointerOnString = %zd\n someShort1 = %zd\n someShort2 = %zd\n someShort3 = %zd\n someInt = %zd\n someFloat = %zd\n someLongLong = %zd\n someDouble = %zd\n someBool1 = %zd\n someBool2 = %zd\n someBool3 = %zd\n someBool4 = %zd\n someBool5 = %zd\n someBool6 = %zd\n\v",
           offsetof(AP_MyFirstStructure, pointerOnString),
           offsetof(AP_MyFirstStructure, someShort1),
           offsetof(AP_MyFirstStructure, someShort2),
           offsetof(AP_MyFirstStructure, someShort3),
           offsetof(AP_MyFirstStructure, someInt),
           offsetof(AP_MyFirstStructure, someFloat),
           offsetof(AP_MyFirstStructure, someLongLong),
           offsetof(AP_MyFirstStructure, someDouble),
           offsetof(AP_MyFirstStructure, someBool1),
           offsetof(AP_MyFirstStructure, someBool2),
           offsetof(AP_MyFirstStructure, someBool3),
           offsetof(AP_MyFirstStructure, someBool4),
           offsetof(AP_MyFirstStructure, someBool5),
           offsetof(AP_MyFirstStructure, someBool6));
    
    printf("sizeof(AP_MyFirstStructure) = %zd\n\v", sizeof(AP_MyFirstStructure));
    
      
//    
//    int *pointerByte;
//    pointerByte = (int *) APPointerMyFirstStructure;
//   
//    int i = 0;
//    while(i < sizeof(AP_MyFirstStructure)) {
//        printf("[%02d] %02X\n", i, pointerByte[i]);
//        ++i;
//    }
}

typedef struct AP_FirstUnionStructure AP_FirstUnionStructure;

AP_FirstUnionStructure unionStructure;

void APStructureAndUnionTest(){
    
    printf("sizeof(AP_FirstUnionStructure) = %zd\n\v", sizeof(AP_FirstUnionStructure));
    printf("Ofset bitFieldsBool = %zd\n\v", offsetof(AP_FirstUnionStructure, bitFieldsBool));
    printf("Ofset flags = %zd\n\v", offsetof(AP_FirstUnionStructure, flags));
    
}





