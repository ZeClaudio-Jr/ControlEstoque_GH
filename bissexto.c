#include <stdio.h>
#include <stdlib.h>
#include "validata.h"
#include "bissexto.h"


void bissexto(void) {
    if (((aaaa % 4) == 0) && ((aaaa % 100 != 0) || (aaaa % 400 == 0))) {
        return 1;
    } 
    
    else {
        return 0;
    }
}