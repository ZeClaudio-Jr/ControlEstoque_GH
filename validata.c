#include <stdio.h>
#include <stdlib.h>
#include "validata.h"
// #include "bissexto.h"


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
        if ((mm == 1) || (mm == 3) || (mm == 5) || (mm == 7) || (mm == 8) || (mm == 10) || (mm == 12)) {
          dd >= 1 && dd <= 31;
          if (mm == 2) {
            if (((aaaa % 4) == 0) && ((aaaa % 100) != 0) || ((aaaa % 400) == 0)) {
              ((dd >= 1) && (dd <= 29));
              // return 1;
            }
            else {
              ((dd >= 1) && (dd <= 28));
            }
            return 0;
          }
        else {
          ((dd >= 1) && (dd <= 30));
        
        }
        printf("\n\n%d/%d/%d - Data ACEITA! ", dd, mm, aaaa);
        
        return 0;
        }

    } 
    else {
      printf("\n\nData: %d/%d/%d - Data informada IMPROPRIA! \nDigite novamente.\n\n\n", dd, mm, aaaa);

      main();
        // printf("Data informada IMPROPRIA! ");
    }        

    // printf("Data: %d/%d/%d", dd, mm, aaaa);
return 0;

}
// ()

