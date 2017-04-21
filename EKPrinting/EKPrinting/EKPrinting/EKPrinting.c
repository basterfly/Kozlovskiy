//
//  EKPrinting.c
//  ICPrinting
//
//  Created by Egor on 11.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//
#include <stdio.h>
#include "EKPrinting.h"

void EKPrint(){
    printf("string1  \n");
    printf("        string2 ");
    printf("\n string3 \n");
    
}

void EKPrintParents(void) {
    EKPrint();
    printf("papa \n");
    printf("Hello, mama \n");

    //    int value = 10;
    //
    //    printf("%d \n", value);//значение
    //    printf("%p \n", &value);//адрес в памяти
    
    int intValue = 3;
    double doubleResult = intValue * intValue / 4 % 7 + 4.0 * intValue - 1.5 + 'A';
    double doubleMyResult = ((intValue * intValue) / (4 % 7)) + (4.0 * intValue) - 1.5 + 'A';
    printf(" doubleResult = %f \n doubleMyResult = %f \n", doubleResult, doubleMyResult);
    
    //doubleResult = doubleResult * doubleResult / 4 % 7 + 4.0 * doubleResult - 1.5 + 'A';
    double doubleResult2 = 3.0;
    double result=0;
    result = (doubleResult2 * doubleResult2);
    result = result / 4;
    result = (long)result % 7;//делить по модулю только целое. %-остаток от целочисленного деления
    doubleResult2 =result + (4.0 * doubleResult2)- 1.5 + 'A';
    printf("doubleResult2 = %f \n", doubleResult2);
    
    //Print sizeof types by printf()
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
}
