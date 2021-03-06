#include <stdio.h>
#include <stdlib.h>
#include "validata.h"
// #include <>

int main(void) {
    int dd;
    int mm;
    int aaaa;
    
    printf("Digite o dia: ");
    scanf("%d", &dd);
    printf("Digite o mes: ");
    scanf("%d", &mm);
    printf("Digite o ano: ");
    scanf("%d", &aaaa);

    
    if ((aaaa >= 2000 && aaaa <= 2100) && (mm >= 1 && mm <= 12) && (dd >= 1 && dd <= 31)) {
        printf("\n\n%d/%d/%d - DATA ACEITA! ", dd, mm, aaaa);

    }
    else {
        printf("\nData: %d/%d/%d - Data informada IMPROPRIA! \nDigite novamente.\n\n>>", dd, mm, aaaa);
        main();
    }        
       
    return 0;
}

// () 9






