//
//  APSenatorFunction.c
//  StartC
//
//  Created by Aleksandr Poliakov on 12.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APSenatorFunction.h"

typedef enum  {
    APEmbezzlement,
    APRelativelyHonest,
    APAlmostAnAngel,
} APFinancialPosition;

typedef int Money;

void APFunctionSenatorIncome(Money salary) {
    Money embazzlement = salary * 1000;
    Money honest = salary * 120;
    Money angel = salary * 12;
    
    APFinancialPosition position = (embazzlement > honest) ? APEmbezzlement : (honest > angel) ?
    APRelativelyHonest : APAlmostAnAngel;
    
    switch (position) {
        case APEmbezzlement:
            printf("It's an embazzlement!\n");
            break;
            
        case APRelativelyHonest:
            printf("It may well be an honest man!\n");
            break;
            
        case APAlmostAnAngel:
            printf("Yes it's almost an angel!\n");
            break;
            
        default:
            printf("It's not clear - is it alive, isn't it?\n");
            break;
    }
    printf("\v");
}
