#include <stdio.h>
#include <math.h>

#define MAXPRIME 1400500
#define MAXNUMBERS 200000

int main(void) {
  long primes[MAXPRIME];
  long numPrimes = 3;
  long primeSum = 0;
  primes[0] = 2; primes[1] = 3; primes[2] = 5;

  for (long i = 7; i < MAXPRIME; i+=2) {

    for(long j = 0; j < MAXNUMBERS; j++) {
      if (i % primes[j] == 0) {
        break;
      }
      else if (j == numPrimes - 1) {
        primes[numPrimes++] = i;
        //printf("prime[%d] = %ld\n", j + 1, primes[j]);
      }
    }
  }
  for(long i = 0; i<numPrimes; i++) {
    primeSum += primes[i];
  }
  printf("Prime Sum = %li\n", primeSum);

  return 0;
}
