//
//  html2.c
//  EKPrinting
//
//  Created by Egor on 12.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include "html2.h"
#include "EKFunctionPrintTypes.h"
#include "limits.h"

void EKhtml2Tasks(void){
    //    //робних чисел, символів, строк
    
    int intVar = 10;
    char *intName = "int";
    EKFunctionPrintInt(intVar, intName);
    
        float floatVar = 3.14;
        char *floatName = "float";
        EKFunctionPrintFloat(floatVar, floatName);
    
        char charVar = 'a';
        char *charName = "char";
        EKFunctionPrintChar(charVar, charName);
    
        EKFunctionPrintString("string", "char string");

}
//Принимает 1 парамет и ведут себя как ++ --
void EKIncrement(int *incrVar){
    
    (*incrVar)++;
}

void EKDecrement(int *decrVar){
    (*decrVar)--;
}
//3а допомогою printf протестувати та пояснити, що буде:
//- якщо ціле ділять на дробне;
//- якщо дробне помножують на ціле;
//- якщо ціле ділять на ціле;
//- якщо у цілого беруть залишок від цілого (операція %);
//- якщо до short додають int;
//- якщо записати у менший тип більший тип з великим значенням (наприклад, max з limits.h);

void EKMathTest(){
    printf("(5 / 2.3) = %f \n",(5 / 2.3));
    printf("(2.2 * 4) = %f \n",(2.2 * 4));
    printf("(10 / 6) = %d \n",(10 / 6));
    printf("4 %% 7 = %d \n",(4 % 7));
    short shortVar = 6;
    printf("6 + 10 = %d \n",(shortVar + 10));
    unsigned char charVar = 65;
    //int intVar = 255;
    charVar = charVar + ULLONG_MAX;
    printf("65 + ULLONG_MAX = %d \n",charVar);
}

void EKVariablesTest(){
    //print name_types = value
    short shortVar;
    unsigned short unShortVar;
    int intVar;
    unsigned int unIntVar;
    long longVar;
    float floatVar;
    double doubleVar;
    char charVar;
    long long longLongVar;
    unsigned char unCharVar;
    printf("shortVar %d \n", shortVar);
    printf("unShortVar %d \n", unShortVar);
    printf("intVar %d \n", intVar);
    printf("unIntVar %d \n", unIntVar);
    printf("longVar %ld \n", longVar);
    printf("floatVar %f \n", floatVar);
    printf("doubleVar %lf \n", doubleVar);
    printf("charVar %c \n", charVar);
    printf("longLongVar %lld \n", longLongVar);
    printf("unCharVar %d \n", unCharVar);
    
    //how to work and print increment, decrement in parameters
    intVar = 0;
    printf("0++ = %d \n", intVar++);
    printf("++0 = %d \n", ++intVar);
    intVar = 0;
    printf("0-- = %d \n", intVar--);
    printf("--0 = %d \n", --intVar);
}

