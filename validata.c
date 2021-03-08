#include <stdio.h>
#include <stdlib.h>
#include "validata.h"
#include "bissexto.h"

// int dataCorreta(int, int, int);
// void bissexto();

int main() {

  // int data;
  int dd;
  int mm;
  int aaaa;
  int diaMax;
    
  printf("Digite o dia: ");
  scanf("%d", &dd);
  printf("Digite o mes: ");
  scanf("%d", &mm);
  printf("Digite o ano: ");
  scanf("%d", &aaaa);

  if ((aaaa >= 2000 && aaaa <= 2100) && (mm >= 1 && mm <= 12) && (dd >= 1 && dd <= 31)) {
    printf("\n\n%d/%d/%d - DATA ACEITA! ", dd, mm, aaaa);

  } 
  
  if (mm == 2) {
    if (bissexto) {
      diaMax = 29;
    } 
    
    else {
      diaMax = 28;
    }
    
    if (dd > diaMax) {
      return 0;
    }
    return 0;
  }

  else {
    printf("\nData: %d/%d/%d - Data informada IMPROPRIA! DIGITE NOVAMENTE.\n\n", dd, mm, aaaa);
    main();

  }

}
  // data = dataCorreta(dd,mm,aaaa);

  // if dataCorreta {
  //   printf("\n\n%d/%d/%d - DATA ACEITA! ", dd, mm, aaaa);
  // }
  // else {
  //   printf("\nData: %d/%d/%d - Data informada IMPROPRIA! \nDigite novamente.\n\n>>", dd, mm, aaaa);
  //   main();
  // }

//   return 0;
// }

// int dataCorreta() {
//   int dd;
//   int mm;
//   int aaaa;
//   int diaMax;

//   if ((aaaa < 2000 || aaaa > 2100) || (mm < 1 || mm > 12) || (dd < 1 || dd > 31)) {
//     printf("\nData: %d/%d/%d - Data informada IMPROPRIA! \nDigite novamente.\n\n>>", dd, mm, aaaa);
//     main();
//   }
  
// }if (mm == 2) {
//   if (bissexto(aaaa)) {
//     diaMax = 29;
//   }

//   else {
//     diaMax = 28;
//   }
// }
// else {
//   if ((mm == 4) || (mm == 6) || (mm == 9) || (mm == 11)) {
//     diaMax = 30;
//   }
//   else {
//     diaMax = 31;
//   }
//   if (diaMax < dd) {
//     printf("\nData: %d/%d/%d - Data informada IMPROPRIA! \nDigite novamente.\n\n>>", dd, mm, aaaa);
//     main();
//     return 0;
//   }
//   return 1;
// }
// () 9
