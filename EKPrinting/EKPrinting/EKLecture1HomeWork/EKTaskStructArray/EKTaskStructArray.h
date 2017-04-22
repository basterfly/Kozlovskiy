//
//  EKTaskStructArray.h
//  EKPrinting
//
//  Created by Egor on 16.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#ifndef EKTaskStructArray_h
#define EKTaskStructArray_h

#include <stdio.h>

typedef struct EKStructArray EKStructArray;

EKStructArray *EKStructArrayCreate();
void EKStructArrayRetain(EKStructArray *array);
void EKStructArrayRelease(EKStructArray *array);
void EKStructArrayAddObject(EKStructArray *array, EKStructArray *anotherArray);
void EKStructArrayDeleteObjectAtIndex(EKStructArray *array, uint64_t index);
EKStructArray *EKStructArrayGetObjectAtIndex(EKStructArray *array, uint64_t index);

#endif /* EKTaskStructArray_h */
