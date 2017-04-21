//
//  EKLecture1HomeWork.c
//  EKPrinting
//
//  Created by Egor on 13.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include <stdlib.h>
#include <stdbool.h>

#include "EKLecture1HomeWork.h"

#define EKMacroMethod(type, specificator) \
void EKMacroMethod##type(type var){ \
    printf(#specificator "\n", var); \
}

EKMacroMethod(int, %d);
EKMacroMethod(float, %f);
EKMacroMethod(char, %c);

#define EKMacroCall(type, var) \
EKMacroMethod##type(var)

//  Generate Macro Method
void EKStartMacro(void){
    EKMacroCall(int, 5);
    EKMacroCall(float, 2.3);
    EKMacroCall(char, 'a');
}

// method with keys 3 - mama, 5 - papa, 15 - mamapapa like a divisor, if not a divisor print "", print 1000 iteration, return num of iteration.
void EKPrintMamaPapa(void){
    for ( int iterationCount = 1; iterationCount <= 100; iterationCount++) {
        EKPrintIterationNumber(iterationCount);
        if (iterationCount % 3 == 0) {
            EKPrintAnyString("Mama");
        }
            
        if (iterationCount % 5 == 0){
            EKPrintAnyString("Papa");
        }

        EKPrintAnyString("\n");
    }
}

void EKPrintIterationNumber(int iterationCount){
    printf("%d - ", iterationCount);
}

void EKPrintAnyString(char *printString){
    printf("%s", printString);
}
