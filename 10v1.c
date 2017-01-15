#include <stdio.h>
#include <math.h>

#define MAXPRIMES 150000

int main(void) {
  long primes[MAXPRIMES];
  int numPrimes = 3;
  long tempPrime = 1;
  primes[0] = 2; primes[1] = 3; primes[2] = 5;

  for (int i = 7; i < MAXPRIMES; i+=2) {

    for(int j = 0; j < 10001; j++) {
      if (i % primes[j] == 0) {
        break;
      }
      else if (j == numPrimes - 1) {
        primes[numPrimes++] = i;
        printf("prime[%d] = %ld\n", j + 1, primes[j]);
      }
    }
  }

  return 0;
}
