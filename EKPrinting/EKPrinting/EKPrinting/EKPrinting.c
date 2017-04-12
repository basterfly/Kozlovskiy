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
//void EKPrint(){
//    printf("string1  \n");
//    printf("        string2 ");
//    printf("\n string3 \n");
//
//}
//void EKPrint(){
//    printf("string1  \n");
//    printf("        string2 ");
//    printf("\n string3 \n");
//
//}
void EKPrintParents(void) {
    EKPrint();
    printf("papa \n");
}
