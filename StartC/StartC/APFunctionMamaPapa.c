//
//  APFunctionMamaPapa.c
//  StartC
//
//  Created by Aleksandr Poliakov on 12.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#include "APFunctionMamaPapa.h"


int integerOne = 3;
int integerTwo = 5;

int countMama = 0;
int countPapa = 0;
int countMamaPapa = 0;

char oneTextPapa[] = "Papa";
char twoTextMama[] = "Mama";


void APtestFunctionMamaPapa(int inputSomeInteger){
    
    APTestIfElse();
    
    printf("All mama - %d\n", countMama);
    printf("All papa - %d\n", countPapa);
    printf("All mamapapa - %d\n", countMamaPapa);
    
}

void APTestIfElse(inputSomeInteger){
    for (int count = 1; count <= inputSomeInteger; count++) {
        if (count % integerOne == 0 && count % integerTwo == 0) {
            printf("%s%s\n", twoTextMama, oneTextPapa);
            ++countMamaPapa;
        }else if (count % integerOne == 0){
            printf("%s\n", twoTextMama);
            ++countMama;
        }else if (count % integerTwo == 0){
            printf("%s\n", oneTextPapa);
            ++countPapa;
        }
    }

}
