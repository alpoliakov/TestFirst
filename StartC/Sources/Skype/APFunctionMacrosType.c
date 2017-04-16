//
//  APFunctionMacrosType.c
//  StartC
//
//  Created by Aleksandr Poliakov on 13.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APFunctionMacrosType.h"


APGeneratePrintFunction(float, %5.4f)
APGeneratePrintFunction(char, %d)
APGeneratePrintFunction(double, %0.2f)
APGeneratePrintFunction(short, %hd)
APGeneratePrintFunction(long, %ld)

void APSomeFunctionMacros(void) {
    APCallPrintFunction(float, 40);
    APCallPrintFunction(char, 2);
    APCallPrintFunction(double, 10);
    APCallPrintFunction(short, 20);
    APCallPrintFunction(long, 100000000);
    printf("\v");
}
