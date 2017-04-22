//
//  EKSignedToUnsigned.c
//  EKPrinting
//
//  Created by Egor on 11.04.17.
//  Copyright © 2017 Yegor Kozlovskiy. All rights reserved.
//

#include "EKSignedToUnsigned.h"

void EKSignedToUnsigned(int64_t min, int64_t max) {
    printf("Min=%llu, Max=%llu \n", (min + max)+1, (min * -1)+ max);
}
