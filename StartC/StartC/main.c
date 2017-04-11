//
//  main.c
//  StartC
//
//  Created by Aleksandr Poliakov on 08.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

//#include "APPrintText.h"
//#include "APPrintText.h"
//#include "APPrintText.h"
#include "APPrintText.h"
#include "APPrintSomeNumber.h"
#include "APPrintPararm.h"
#include "APDecrimentIncrement.h"
#include "APSomeMathOperations.h"
#include "APBoolTypeExample.h"

/*
char *APtestChar = "Hello";
unsigned char APtestUnsChar = 255;
signed char APtestSignChar = -128;
int APtestInt = -2147483648;
unsigned int APtestUnsInt= 4294967295;
short APtestShort = -32768;
unsigned short APtestUnsShort = 65535;
long APtestLong = 2147483647;
unsigned long APtestUnsLong= 4294967295;

float APtestFloat = 3.4E+38;
double APtestDouble = 1.7E+308;
long double APtestLongDouble = 3.4E-324;
*/

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    //return 0;
    //APPrint();
    APPrint("World!");
    APPrint("mama!");
    APPrintParents();
    APPrintNumberForUp();
    APPrintNumberForDown();
    APprintSomeParam("char", "-128 to 127");
    APFunctionDecrement(5);
    APFunctionIncrement(5);
    APFunctionMathOperations();
    APSomeVariablesTests();
    APPrintSomeVariablesTypes();
    APUseDecrimentIncrement(40, 45);
    APsomeExamplesBool(false);
    APsomeMathLogicOperations(12, 15);
    APSomeTernaryOperation(20, 10);
    APSomeIfElseOperation(20,30);
    AOSomeExampleArray();
       
    return 0;
}


