//
//  APFunctionMacrosType.c
//  StartC
//
//  Created by Aleksandr Poliakov on 13.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APFunctionMacrosType.h"

APGeneratePrintFunction(char, %d)

void APSomeFunctionMacros(){
    
    char const testType = 15;
    APCallPrintFunction(char, testType);
    
    PRINT_HELLO
}

