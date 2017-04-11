//
//  APPrintSomeNumber.c
//  StartC
//
//  Created by Aleksandr Poliakov on 09.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APPrintSomeNumber.h"

void APPrintNumberForUp(){
    char i = 0;
    for(; i <= 9; i++){
        printf("%d", i);
    }
    printf("\n");
    
}

void APPrintNumberForDown(){
    char i = 9;
    for(; i >= 0; i--){
        printf("%d", i);
    }
    printf("\n");
}
