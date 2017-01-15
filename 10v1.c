#include <stdio.h>
#include <math.h>

#define MAXPRIME 2000000
#define MAXNUMBERS 200000

int main(void) {
  long primes[MAXNUMBERS];
  long numPrimes = 3;
  long primeSum = 0;
  primes[0] = 2; primes[1] = 3; primes[2] = 5;

  for (long i = 7; i < MAXPRIME; i+=2) {

    for(long j = 0; primes[j] <= i; j++) {
      if (i % primes[j] == 0) {
        break;
      }
      else if (j == numPrimes - 1) {
        primes[numPrimes++] = i;
      }
    }
  }
  for(long i = 0; i<numPrimes; i++) {
    primeSum += primes[i];
  }
  printf("Prime Sum = %li\n", primeSum);

  return 0;
}
