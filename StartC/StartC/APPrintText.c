//
//  APPrintText.c
//  StartC
//
//  Created by Aleksandr Poliakov on 08.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//
//#include <stdio.h>
#include "APPrintText.h"

/*
void APPrint(){
    printf("Hello, World!\n");
}
*/

// Function APPrint() outputs into console some text that starts with a word "Hello".


void APPrint(char *text) {
    printf("Hello, %s\n", text);
}

void APPrintParents(){
    APPrint("papa!");
}
