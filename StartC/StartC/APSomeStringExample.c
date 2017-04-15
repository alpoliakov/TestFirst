//
//  APSomeStringExample.c
//  StartC
//
//  Created by Aleksandr Poliakov on 12.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APSomeStringExample.h"

char someSrtring[] = {"Some string wich has some long."};
char *valueSomeString = someSrtring;


void APFunctionLengthString(){
    int count = 0;
    while (valueSomeString[count] != '\0') {
        count++;
        //valueSomeString++;
    }
    printf("%d\n\v", count);
    int lengthArray = sizeof(someSrtring)/sizeof(someSrtring[0]);
    printf("%d\n\v", lengthArray);
}

void APFunctionOutputSymbols(){
    int i = 0;
    while (valueSomeString[i] != '\0') {
        printf("%c\n", valueSomeString[i]);
        i++;
    }
    printf("\v");
    
    char APshortString[10] = {"Hello"};
    int j = 0;
    while (j < 10) {
        printf("%c", APshortString[j]);
        j++;
    }
    printf("\n\v");
    
    char APlongString[10] = {"Hello, mothefacker."};
    int cnt = 0;
    while (cnt < 10) {
        printf("%c", APlongString[cnt]);
        cnt++;
    }
    printf("\n\v");
    
    
    //Stopped run code on the middle
    
    char APnullInMiddleString[] = {"I have a lot '\0' of cars"};
    int x= 0;
    while (APnullInMiddleString[x] != '\0') {
        printf("%c", APnullInMiddleString[x]);
        x++;
    }
    printf("\n\v");
}











