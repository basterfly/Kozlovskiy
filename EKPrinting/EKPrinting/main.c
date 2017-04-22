//
//  main.c
//  ICPrinting
//
//  Created by Egor on 10.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.

#include <stdio.h>
#include "EKPrinting.h" 
#include "EKNumbers.h"
#include "EKSignedToUnsigned.h"
#include "EKFunctionPrintTypes.h"
#include "html2.h"
#include "EKLecture1HomeWork.h"
#include "EKTaskStructArray.h"
#include "EKStructureOfData.h"

EKPrintSizeofTypesMacro(char);
EKPrintSizeofTypesMacro(short);
EKPrintSizeofTypesMacro(int);
EKPrintSizeofTypesMacro(float);
EKPrintSizeofTypesMacro(double);
EKPrintSizeofTypesMacro(long);

int main(int argc, const char * argv[]) {

//    EKPrint();
//    EKPrintParents();
//    EKNum19();
//    EKNum91();
//    EKSignedToUnsigned(INT64_MIN, INT64_MAX);
//    EKSignedToUnsigned(WCHAR_MIN, WCHAR_MAX);
//    EKhtml2Tasks();
//    int incrVar = 0;
//    int decrVar = 1;
//    EKIncrement(&incrVar);
//    EKDecrement(&decrVar);
//    printf("increment = %d \n", incrVar);
//    printf("decrement = %d \n", decrVar);
//    EKMathTest();
//    EKVariablesTest();
    EKPrintSizeofchar();
    EKPrintSizeofshort();
    EKPrintSizeofint();
    EKPrintSizeoffloat();
    EKPrintSizeofdouble();
    EKPrintSizeoflong();
    EKPrintMamaPapa();
    EKStartMacro();
    EKTestStructOffsetof();
    //EKPrintByte(1);
    char charVarTest = 2;
    EKPrintByte(&charVarTest);
    printf("\n");
    int intTestVar = 8;
    EKPrintMemory(&intTestVar, sizeof(intTestVar));
    
    EKStructArray *array = EKStructArrayCreate();
    EKStructArray *array2 = EKStructArrayCreate();
    EKStructArrayAddObject(array, array2);
    EKStructArray *array3 = EKStructArrayGetObjectAtIndex(array, 0);
    if (array2 == array3) {
        printf("equal \n");
    }
    EKStructArrayDeleteObjectAtIndex(array, 0);
    EKStructArrayRelease(array2);
    EKStructArrayRelease(array);
    
    return 0;
}
