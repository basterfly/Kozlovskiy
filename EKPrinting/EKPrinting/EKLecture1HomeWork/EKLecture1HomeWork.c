//
//  EKLecture1HomeWork.c
//  EKPrinting
//
//  Created by Egor on 13.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include "EKLecture1HomeWork.h"

#include <stdlib.h>
#include <stdbool.h>
#define EKMacroMethod(type, specificator) \
void EKMacroMethod##type(type var){ \
    printf(#specificator "\n", var); \
}

EKMacroMethod(int, %d);
EKMacroMethod(float, %f);
EKMacroMethod(char, %c);

#define EKMacroMethodCall(type, var) \
EKMacroMethod##type(var)


static uint8_t bitfields = 21;

//print sizeof of types
void EKPrintSizeofTypes(void){
    printf("char = %lu byts\n", sizeof(char));
    printf("short = %lu byts\n", sizeof(short));
    printf("int = %lu byts\n", sizeof(int));
    printf("long = %lu byts\n", sizeof(long));
    printf("float = %lu byts\n", sizeof(float));
    printf("double = %lu byts\n", sizeof(double));
    

}
// method with key 3 - mama, 5 - papa, 15 - mamapapa like a divisor, if not a divisor print "", print 1000 iteration, return num of iteration.
void EKMethodMamaPapa(void){
    for ( int iterationCount = 0; iterationCount < 1000; iterationCount++) {
        if (iterationCount % 15 == 0) {
            EKPrintMethodMamaPapa(iterationCount, "mamapapa");
        }
        else if (iterationCount % 5 == 0){
            EKPrintMethodMamaPapa(iterationCount, "papa");
        }
        else if (iterationCount % 3 == 0) {
            EKPrintMethodMamaPapa(iterationCount, "mama");
        }
        else printf("%s ", "\n");
    }
}

void EKPrintMethodMamaPapa(int numbIteration, char *string){
    printf("%d - %s \n", numbIteration, string);
}
//  Generate Macro Method
void EKStartMacroMethod(void){
    EKMacroMethodCall(int, 5);
    EKMacroMethodCall(float, 2.3);
    EKMacroMethodCall(char, 'a');
}

typedef struct {
    bool boolVar1;
    float floatVar;
    bool boolVar2;
    short shortVar2;
    int intVar;
    bool boolVar3;
    double doubleVar;
    long long llongVar;
    bool boolVar4;
    short shortVar1;
    bool boolVar5;
    short shortVar3;
    char *string;
    bool boolVar6;
} EKStruct;

void EKTestMethodOffsetof(void){
    printf("%lu \n", offsetof(EKStruct, boolVar1));
    printf("%lu \n", offsetof(EKStruct, floatVar));
    printf("%lu \n", offsetof(EKStruct, boolVar2));
    printf("%lu \n", offsetof(EKStruct, shortVar2));
    printf("%lu \n", offsetof(EKStruct, intVar));
    printf("%lu \n", offsetof(EKStruct, boolVar3));
    printf("%lu \n", offsetof(EKStruct, doubleVar));
    printf("%lu \n", offsetof(EKStruct, llongVar));
    printf("%lu \n", offsetof(EKStruct, boolVar4));
    printf("%lu \n", offsetof(EKStruct, shortVar1));
    printf("%lu \n", offsetof(EKStruct, boolVar5));
    printf("%lu \n", offsetof(EKStruct, shortVar3));
    printf("%lu \n", offsetof(EKStruct, string));
    printf("%lu \n", offsetof(EKStruct, boolVar6));
    printf("sizeof EKStruct = %lu \n", sizeof(EKStruct));
}
