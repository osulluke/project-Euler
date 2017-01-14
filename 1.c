#include <stdio.h>
#include <stdlib.h>

//Prototypes
int multiple35(int);
void printAnswer(int);

int main(void) {
  //int mults[1000];
  int total = 0;

  for (int i = 0; i < 1000; i++) {
    //mults[i] = multiple35(i);
    //total += mults[i];
    //printf("Element %d = %d\n", i, mults[i]);
    total += multiple35(i);
  }

  printAnswer(total);

  return 0;
}

int multiple35(int j) {
  if ( (j % 3) == 0 || (j % 5) == 0) {
    return j;
  }

  else {
    return 0;
  }
}

void printAnswer(int i) {
  printf("\nThe sum of all #'s below 1000 with multiples of 3 or 5 = %d\n", i);
  return;
}
