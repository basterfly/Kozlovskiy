//
//  EKTaskStructArray.c
//  EKPrinting
//
//  Created by Egor on 16.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include <stdlib.h>
#include <string.h>
#include "EKTaskStructArray.h"


//Создать структуру типа массив, которая бы реализовывала следующие требования:
//1. Структура должна владеть указателем на массив элементов.
//2. Должен существовать метод создания структуры на куче.
//3. Должен существовать метод деаллокации структуры на куче.
//4. Массив должен создаваться с произвольным начальным количеством места под элементы.
//5. Элементом может быть сущность произвольного размера в байтах.
//6. Массив должен поддерживать расширение, сужение занимаемого в памяти места в зависимости от количества элементов.

struct EKStructArray{
    void **data;
    uint64_t countDataElements;
    uint64_t refCounter;
};

EKStructArray *EKStructArrayCreate(){
    EKStructArray *array = calloc(1, sizeof(*array));
    if (NULL != array) {
        array->refCounter = 1;
        array->data = calloc(10, sizeof(*(array->data)));
    }
    return array;
}

void EKStructArrayDeallocate(EKStructArray *array) {
    free(array->data);
    free(array);
}

void EKStructArrayRetain(EKStructArray *array) {
    if (array != NULL) {
        array->refCounter += 1;
    }
}

void EKStructArrayRelease(EKStructArray *array) {
    if (array != NULL) {
        array->refCounter -= 1;
        if (array->refCounter == 0) {
            EKStructArrayDeallocate(array);
        }
    }
}

void EKStructArrayAddObject(EKStructArray *array, EKStructArray *anotherArray) {
    if (array != NULL) {
        array->data[array->countDataElements] = anotherArray;
        array->countDataElements += 1;
        EKStructArrayRetain(anotherArray);
    }
}

void EKStructArrayDeleteObjectAtIndex(EKStructArray *array, uint64_t index) {
    if (array != NULL && index < array->countDataElements) {
        EKStructArray *temp = array->data[index];
        array->data[index] = NULL;
        EKStructArrayRelease(temp);
        array->countDataElements -= 1;
        if (array->countDataElements - index != 0) {
            memmove(array->data + index, array->data + index + 1, (array->countDataElements - index) * sizeof(*array->data));
        }
    }
}

EKStructArray *EKStructArrayGetObjectAtIndex(EKStructArray *array, uint64_t index) {
    if (array != NULL && index < array->countDataElements) {
        return array->data[index];
    }
    
    return NULL;
}
