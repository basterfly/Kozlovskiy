//
//  EKLecture1HomeWork.c
//  EKPrinting
//
//  Created by Egor on 13.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include "EKLecture1HomeWork.h"

//print sizeof of types
void EKPrintSizeofTypes(void){
    printf("char = %lu byts\n", sizeof(char));
    printf("short = %lu byts\n", sizeof(short));
    printf("int = %lu byts\n", sizeof(int));
    printf("long = %lu byts\n", sizeof(long));
    printf("float = %lu byts\n", sizeof(float));
    printf("double = %lu byts\n", sizeof(double));

}
// method with key 3 - mama, 5 - papa, 15 - mamapapa like a divisor, if not a divisor print "", print 1000 iteration, return num of iteration.
void EKMethodMamaPapa(void){
    for ( int iterationCount = 0; iterationCount < 1000; iterationCount++) {
        if (iterationCount % 15 == 0) {
            printf("%d - %s \n", iterationCount, "mamapapa");
        }
        else if (iterationCount % 5 == 0){
            printf("%d - %s \n", iterationCount, "papa");
        }
        else if (iterationCount % 3 == 0) {
            printf("%d - %s \n", iterationCount, "mama");
        }
        else printf(" %s ", "\n");
    }
}

