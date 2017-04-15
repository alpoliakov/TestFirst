//
//  APFunctionDecrimentIncrement.c
//  StartC
//
//  Created by Aleksandr Poliakov on 10.04.17.
//  Copyright © 2017 Aleksandr Poliakov. All rights reserved.
//

#import "APDecrimentIncrement.h"


void APFunctionDecrement(int paramDecrement) {
    paramDecrement += 1;
    printf("%d\n", paramDecrement);
}

void APFunctionIncrement(int paramIncrement) {
    paramIncrement -= 1;
    printf("%d\n", paramIncrement);
}



