//
//  APFunctionsForThreeLoops.c
//  StartC
//
//  Created by Aleksandr Poliakov on 12.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APFunctionsForThreeLoops.h"

void APFunctionOutputNambersLoopFor(int iteration, int small, int big) {
    for (int count = small, y = 2; count <= big && count != 50; count++, y++) {
        for (int x = 0; x < iteration && x < 20; x++) {
            printf("%d", count);
        }
        printf("\n");
        if (y % 3 == 0) {
            count++;
            y++;
        }
    }
    printf("\v");
}

void APFunctionOutputNambersWhile(int iter, int smaller, int biggest) {
    int number = smaller;
    int rowNumbers  = 0;
    int rowNumberThree = 1;
    
    while (number <= biggest) {
        if (number == 50) {
            return;
        }
        while (rowNumbers < iter && rowNumbers < 20) {
            printf("%d", number);
            rowNumbers++;
        }
        printf("\n");
        number++;
        rowNumberThree++;
        rowNumbers = 0;
        
        if (rowNumberThree % 3 == 0) {
            number++;
            rowNumberThree++;
        }
    }
    printf("\v");
}









