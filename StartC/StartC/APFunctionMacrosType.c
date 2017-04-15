//
//  APFunctionMacrosType.c
//  StartC
//
//  Created by Aleksandr Poliakov on 13.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APFunctionMacrosType.h"

APGeneratePrintFunction(float, %f)

void APSomeFunctionMacros(){
   
    float const testType = 15;
    APCallPrintFunction(float, testType);
    PRINT_HELLO
    printf("\v");
}

