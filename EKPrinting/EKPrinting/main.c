//
//  main.c
//  ICPrinting
//
//  Created by Egor on 10.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//


#include <stdio.h>
#include "EKPrinting.h" 
#include "EKNumbers.h"
#include "EKSignedToUnsigned.h"
#include "EKFunctionPrintTypes.h"
#include "html2.h"
#include "EKLecture1HomeWork.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    EKPrint();
    EKPrintParents();
    EKNum19();
    EKNum91();
    EKSignedToUnsigned(INT64_MIN, INT64_MAX);
    EKSignedToUnsigned(WCHAR_MIN, WCHAR_MAX);
    
    char charVar;
    unsigned char unCharVar;
    signed char sigCharVar;
    int IntVar;
    unsigned int unIntVar;
    short shortVar;
    unsigned short unShortVar;
    long longVar;
    unsigned long unLongVar;
    float floatVar;
    double doubleVar;
    long double loDoubleVar;
    printf(" charVar %lu \n unCharVar %lu \n sigCharVa %lu \n IntVar %lu \n unIntVar %lu \n shortVar %lu \n \
unShortVar %lu \n longVar %lu \n unLongVar %lu \n floatVar %lu \n doubleVar %lu \n loDoubleVar %lu \n",\
           sizeof(charVar), sizeof(unCharVar), sizeof(sigCharVar), sizeof(IntVar), sizeof(unIntVar), \
           sizeof(shortVar), sizeof(unShortVar), sizeof(longVar), sizeof(unLongVar), sizeof(floatVar), \
           sizeof(doubleVar), sizeof(loDoubleVar));
    
    EKhtml2Tasks();
    int incrVar = 0;
    int decrVar = 1;
    EKIncrement(&incrVar);
    EKDecrement(&decrVar);
    printf("increment = %d \n", incrVar);
    printf("decrement = %d \n", decrVar);
    
    EKMathTest();
    EKVariablesTest();
    EKPrintSizeofTypes();
    EKMethodMamaPapa();
    EKStartMacroMethod();
    EKTestMethodOffsetof();
    EKMethodPrintByte(1);
    return 0;
}
