#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 1056737998

//Prototypes
long multiple35(int);
void printAnswer(long);
long sumkn(int, int);
long sumkORn(int, int, int);
long sumkp(int, int);
int flr(int n, int k);

int main(void) {
  long total = 0;
  clock_t begin, first, stop;
  begin = clock();

  for (int i = 0; i < RANGE; i++) {
    total += multiple35(i);
  }
  printAnswer(total);
  first = clock();

  printAnswer(sumkORn(3, 5, RANGE));
  stop = clock();

  printf("Func 1 time = %li\n", (first - begin) / CLOCKS_PER_SEC);
  printf("Func 2 time = %li\n", (stop - first) / CLOCKS_PER_SEC);
  return 0;
}

long multiple35(int j) {
  if ( (j % 3) == 0 || (j % 5) == 0) {
    return j;
  }

  else {
    return 0;
  }
}

long sumkn(int k, int n) {
  long tot = 0;

  for(int i = 1; i <= flr(n, k); i++) {
    tot += k*i;
  }

  return tot;
}

long sumkORn(int a, int b, int n) {
  long tot = 0;

  tot = sumkn(a, n) + sumkn(b, n) - sumkn(a*b, n);
  //printf("sumkORn = %d\n", tot);
  return tot;
}

long sumkp(int k, int p) {
  return k*(p*(p+1)/2);
}

int flr(int n, int k) {
  int flr = (n - 1) / k;
  //printf("flr; n = %d, k = %d, flr = %d\n", n, k, flr);
  return flr;
}

void printAnswer(long i) {
  printf("\nThe sum of all #'s below 12334321 with multiples of 3 or 5 = %li\n", i);
  return;
}
