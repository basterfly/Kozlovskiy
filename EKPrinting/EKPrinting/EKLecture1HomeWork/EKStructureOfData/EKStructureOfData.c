//
//  EKStructureOfData.c
//  EKPrinting
//
//  Created by Egor on 17.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include <stdlib.h>
#include <stdbool.h>
#include "EKStructureOfData.h"

//1. Создать структуру, данных, хранящую в себе расположенные в случайном порядке 6 bool, 1 float, 1 int, 1 long long, 3 short, 1 double, 1 указатель на строку.
//Требования:
//- создать тестовый метод, который бы с помощью offsetof выводил расположение каждого из элементов;
//- создать тестовый метод, который бы выводил размер всей структуры;
//- перекомпоновать структуру так, чтобы она занимала наименьшее количество места;
//- поместить bool значения в битовое поле и создать union;

typedef struct {
    char *string;
    long long llongVar;
    double doubleVar;
    int intVar;
    float floatVar;
    short shortVar1;
    short shortVar2;
    short shortVar3;
    union {
        //uint8_t bitfield;
        struct {
            bool boolVar1 : 1;
            bool boolVar2 : 1;
            bool boolVar3 : 1;
            bool boolVar4 : 1;
            bool boolVar5 : 1;
            bool boolVar6 : 1;
        };
    };
} EKStruct;

void EKTestStructOffsetof(void) {
    EKStruct structName;
    printf("offsetof %lu \n", offsetof(EKStruct, string));
    printf("sizeof %lu \n", sizeof(structName.string));
    printf("offsetof %lu \n", offsetof(EKStruct, llongVar));
    printf("sizeof %lu \n", sizeof(structName.llongVar));
    printf("offsetof %lu \n", offsetof(EKStruct, doubleVar));
    printf("sizeof %lu \n", sizeof(structName.doubleVar));
    printf("offsetof %lu \n", offsetof(EKStruct, intVar));
    printf("sizeof %lu \n", sizeof(structName.intVar));
    printf("offsetof %lu \n", offsetof(EKStruct, floatVar));
    printf("sizeof %lu \n", sizeof(structName.floatVar));
    printf("offsetof %lu \n", offsetof(EKStruct, shortVar1));
    printf("sizeof %lu \n", sizeof(structName.shortVar1));
    printf("offsetof %lu \n", offsetof(EKStruct, shortVar2));
    printf("sizeof %lu \n", sizeof(structName.shortVar2));
    printf("offsetof %lu \n", offsetof(EKStruct, shortVar3));
    printf("sizeof %lu \n", sizeof(structName.shortVar3));
    //    printf("%lu \n", offsetof(EKStruct, boolVar1));
    //    printf("%lu \n", offsetof(EKStruct, boolVar2));
    //    printf("%lu \n", offsetof(EKStruct, boolVar3));
    //    printf("%lu \n", offsetof(EKStruct, boolVar4));
    //    printf("%lu \n", offsetof(EKStruct, boolVar5));
    //    printf("%lu \n", offsetof(EKStruct, boolVar6));
    printf("sizeof EKStruct = %lu \n", sizeof(EKStruct));
}

//2. Создать метод для вывода битов числа в консоль.
void EKPrintByte(char *byte) {
    int bitsPerBytes = 8;
    static const int16_t firstBit = 1;
    bool isBigendian = 1 == *(char *)&firstBit;
    for (int iterator = 0; iterator < bitsPerBytes; iterator++) {
        int shift = isBigendian ? bitsPerBytes - iterator -1 : iterator;
        printf("%d", 1 & ((*byte) >> shift));
    }
    printf(" ");
}

//any types
void EKPrintMemory(void *memory, size_t size) {
    static const int16_t firstBit = 1;
    bool isBigendian = 1 == *(char *)&firstBit;
    for (int iterator = 0; iterator < size; iterator++) {
        int shift = isBigendian ? (int)size - iterator - 1 : iterator;
        EKPrintByte((char *)memory + shift);
    }
    printf("\n");
}
