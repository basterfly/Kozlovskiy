//
//  EKFunctionPrintTypes.c
//  EKPrinting
//
//  Created by Egor on 12.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include "EKFunctionPrintTypes.h"

void EKFunctionPrintInt(int intVar, char * intName ) {
    printf("%s - %d \n", intName, intVar);
}

void EKFunctionPrintFloat(float floatVar, char * floatName) {
    printf("%s - %f\n", floatName, floatVar);
}

void EKFunctionPrintChar(char charVar, char * charName) {
    printf("%s - %c \n",charName, charVar);
}

void EKFunctionPrintString(char * string, char * stringName) {
    printf("%s - %s \n", stringName, string);
}
