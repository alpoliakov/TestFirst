//
//  APPrintSomeNumber.c
//  StartC
//
//  Created by Aleksandr Poliakov on 09.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APPrintSomeNumber.h"

void APPrintNumberForUp() {
    for(char i = 0; i <= 9; i++) {
        printf("%d", i);
    }
    printf("\n");
}

void APPrintNumberForDown() {
    for(char i = 9; i >= 0; i--) {
        printf("%d", i);
    }
    printf("\n");
}
