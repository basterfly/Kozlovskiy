//
//  EKLecture1HomeWork.h
//  EKPrinting
//
//  Created by Egor on 13.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#ifndef EKLecture1HomeWork_h
#define EKLecture1HomeWork_h

#include <stdio.h>

//print sizeof of types
#define EKPrintSizeofTypesMacro(type) \
void EKPrintSizeof##type(){\
printf(#type" = %lu bytes\n", sizeof(type));\
}

void EKPrintMamaPapa(void);
void EKPrintIterationNumber(int iterationCount);
void EKPrintAnyString(char *printString);
void EKStartMacro(void);

#endif /* EKLecture1HomeWork_h */
