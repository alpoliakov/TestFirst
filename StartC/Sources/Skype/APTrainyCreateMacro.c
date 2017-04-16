//
//  APTrainyCreateMacro.c
//  StartC
//
//  Created by Aleksandr Poliakov on 16.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APTrainyCreateMacro.h"

typedef struct APUnionStructure APUnionStructure;
APUnionStructure *PointerAPUnionStructure;

APGeneratePrintSizeStructure(char, pointerOnString, "%zd");
APGeneratePrintSizeStructure(double, someDoubleUnion, "%0.2f");
APGeneratePrintSizeStructure(int, someIntUnion, "%zd");
APGeneratePrintSizeStructure(float, someFloatUnion, "%0.4f");
APGeneratePrintSizeStructure(short, someShort1Union, "%d");
APGeneratePrintSizeStructure(bool, itFieldsBool, "%d");

void APFounctionOutputSizeStructure(){
    APUnionStructure *APPointerAPUnionStructure;
    
    APCallPrintSizeStructureFunction(char,APPointerAPUnionStructure, pointerOnString);
    APCallPrintSizeStructureFunction(double, APPointerAPUnionStructure, someDoubleUnion);
    APCallPrintSizeStructureFunction(int, APPointerAPUnionStructure, someIntUnion);
    APCallPrintSizeStructureFunction(float, APPointerAPUnionStructure, someFloatUnion);
    APCallPrintSizeStructureFunction(short, APPointerAPUnionStructure, someShort1Union);
    APCallPrintSizeStructureFunction(short, APPointerAPUnionStructure, someShort2Union);
    APCallPrintSizeStructureFunction(bool, APPointerAPUnionStructure, itFieldsBool);
    printf("\v");
    printf("Sizeof(APUnionStructure) = %zd\n\v", sizeof(APUnionStructure));
}

void APFounctionOutputOffsetStructure() {
    APPlaceStructureElements(APUnionStructure, pointerOnString)
    APPlaceStructureElements(APUnionStructure, someDoubleUnion)
    APPlaceStructureElements(APUnionStructure, someIntUnion)
    APPlaceStructureElements(APUnionStructure, someFloatUnion)
    APPlaceStructureElements(APUnionStructure, someShort1Union)
    APPlaceStructureElements(APUnionStructure, someShort2Union)
    APPlaceStructureElements(APUnionStructure, itFieldsBool)
    printf("\v");
}
