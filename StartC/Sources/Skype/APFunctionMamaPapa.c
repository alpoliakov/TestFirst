//
//  APFunctionMamaPapa.c
//  StartC
//
//  Created by Aleksandr Poliakov on 12.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APFunctionMamaPapa.h"

// The first variant

static const int APIntegerOne = 3;
static const int APIntegerTwo = 5;
static int APCountMama = 0;
static int APCountPapa = 0;
static int APCountMamaPapa = 0;
static char * const APStringPapa = "Papa";
static char * const APStringMama = "Mama";

void APTestFunctionMamaPapa(int APInputInteger) {
    APTestIfElse(APInputInteger);
    printf("All mama - %d\n", APCountMama);
    printf("All papa - %d\n", APCountPapa);
    printf("All mamapapa - %d\n\v", APCountMamaPapa);
}

void APTestIfElse(int APInputInteger) {
    for (int count = 1; count <= APInputInteger; count++) {
        if (count % APIntegerOne == 0 && count % APIntegerTwo == 0) {
            printf("%s%s\n", APStringMama, APStringPapa);
            ++APCountMamaPapa;
        } else if (count % APIntegerOne == 0) {
            printf("%s\n", APStringMama);
            ++APCountMama;
        } else if (count % APIntegerTwo == 0) {
            printf("%s\n", APStringPapa);
            ++APCountPapa;
        }
    }
}

// The second variant

typedef char * const  APSomeText;

static APSomeText APMama = "Mama";
static APSomeText APPapa = "Papa";

bool APPrintModification(int value, int divisor, APSomeText string) {
    bool doPrint = !(value%divisor);
    if (doPrint) {
        printf("%s", string);
    }
    
    return doPrint;
}

void APPrintingMamaPapa(int value) {
    bool doPrint = APPrintModification(value, 3, APMama);
    doPrint = APPrintModification(value, 5, APPapa) || doPrint;
    if (doPrint) {
        printf("\n");
    }
}

void APPrintMamaPapa(int number){
    for (int c = 1; c <= number; c++) {
        APPrintingMamaPapa(c);
    }
    printf("\v");
}
