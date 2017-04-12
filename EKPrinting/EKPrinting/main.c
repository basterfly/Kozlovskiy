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

int main(int argc, const char * argv[]) {
    // insert code here...
    EKPrint();
    //return 0;
    printf("Hello, mama \n");
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
   
    //printf("charVar %lu \n",sizeof(charVar));
    
    int intValue = 3;
    double doubleResult = intValue * intValue / 4 % 7 + 4.0 * intValue - 1.5 + 'A';
    double doubleMyResult = ((intValue * intValue) / (4 % 7)) + (4.0 * intValue) - 1.5 + 'A';
    printf(" doubleResult = %f \n doubleMyResult = %f \n", doubleResult, doubleMyResult);
    
    return 0;
}
