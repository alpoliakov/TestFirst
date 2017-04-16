//
//  APFunctionMacrosType.h
//  StartC
//
//  Created by Aleksandr Poliakov on 13.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#ifndef APFunctionMacrosType_h
#define APFunctionMacrosType_h

#include <stdio.h>

void APSomeFunctionMacros(void);

#define APGeneratePrintFunction(type, formatter) \
void APoutput_##type(type value) { \
printf(#type " value = "#formatter";" "\n", value); \
}

#define APCallPrintFunction(type, value) \
APoutput_##type(value)

#define PRINT_HELLO printf("Hello, world!\n");

#endif /* APFunctionMacrosType_h */
