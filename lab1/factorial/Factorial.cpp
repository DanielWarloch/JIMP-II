
#include "Factorial.h"

int factorial(int value) {
  int wynik = 1;
  if (value < 0) {
    for (int i = -1; i >= value; --i) {
      wynik *= i;
    }
  } else {

    if (value == 1 || value == 0) {
      return 1;
    } else {
      for (int i = 2; i <= value; ++i) {
        wynik *= i;
      }
    }

  }
  return wynik;
}



  /* if(value==1 || value==0){
    return 1;
  } else {
    return value * factorial(value-1);
  }
*/
