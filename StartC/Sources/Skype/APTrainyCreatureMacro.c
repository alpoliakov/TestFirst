//
//  APTrainyCreatureMacro.c
//  StartC
//
//  Created by Aleksandr Poliakov on 16.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APTrainyCreatureMacro.h"

typedef struct ExampleStructure ExampleStructure;
ExampleStructure *APPointerExampleStructure;

APGeneratPrintFunction(double,"%zd");

void APOutputSizeStructure(void) {
    
    APCallPrintFunction(double, sizeof(APPointerExampleStructure -> someDouble));
}
