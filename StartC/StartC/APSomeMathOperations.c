//
//  APSomeMathOperations.c
//  StartC
//
//  Created by Aleksandr Poliakov on 10.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APSomeMathOperations.h"

double doubleResult = 3.0;
void APFunctionMathOperations(){
    int percentage = 4 % 7;
    double endEnd = 4.0 * doubleResult;
    endEnd = endEnd - 1.5;
    endEnd = endEnd + 'A';
    doubleResult = doubleResult * doubleResult;
    doubleResult = doubleResult/percentage;
    doubleResult = doubleResult + endEnd;

    printf("%f\n\v", doubleResult);
}

//  Tests with different types of variables

void APSomeVariablesTests(){
    int someInteger = 5;
    int someOneInteger = 2;
    float someFloat = 1.8;
    short someShort = 50;
    //double someDouble = 37.85;
    
    printf("The integer was divided by the float:  %f;\n", someInteger / someFloat);
    printf("An integer type passed to a float type.\n\v");
    
    printf("The float was divided by the integer: %f;\n", someFloat * someInteger);
    printf("An integer type passed to a float type.\n\v");
    
    printf("The integer is divided by another integer: %d;\n", someInteger / someOneInteger);
    printf("We received an integer.\n\v");
    
    printf("For an integer we take the reminder of dividing by another integer: %d;\n", someInteger%someOneInteger);
    printf("We received an integer.\n\v");
    
    printf("Add to the \"short\" the integer: %d;\n", someShort + someInteger);
    printf("We recived an integer.\n\v");
    
    printf("Write a smaller type to a larger type: %d;\n", someInteger = UINT_MAX);
    printf("We recived -1.\n\v");
    
}

void APPrintSomeVariablesTypes(){
    char someChare;
    int someInt;
    float someFloat;
    double someDouble;
    short someOneShort;
    long someLong;
    
    
    printf("%d\n %d\n %f\n %f\n %d\n %ld\n\v", someChare, someInt, someFloat, someDouble, someOneShort, someLong);
    printf("Declaring and not initializing a variable, we do not know what exactly is in the variable now.\n\v");
}

void APUseDecrimentIncrement(int parametrsDecrement, int parametrIncrement){
    while (parametrsDecrement <= 45) {
        printf("%d\n", parametrsDecrement++);
    }
    printf("\v");
    
    while (parametrIncrement >= 40) {
        printf("%d\n", parametrIncrement--);
    }
    printf("\v");
}





