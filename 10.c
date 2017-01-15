#include <stdio.h>
#include <math.h>

#define PRIMEARRAY 200
#define MAXPRIME 2000

int main(void) {
  long primes[PRIMEARRAY];
  long numPrimes = 3;
  long primeSum = 0;
  primes[0] = 2; primes[1] = 3; primes[2] = 5;

  for (int i = 7; i < MAXPRIME; i+=2) {
    printf("Current prime test: %d\n", i);
    for(int j = 1; j < numPrimes; j++) {
      if (i > primes[j] * primes[j]) {
        printf("i(%d) > primes[j]^2 (%d) *** j = %d\n", i, primes[j]*primes[j], j);
        goto skip;
        //break;
      }
      else if (i % primes[j] == 0) {
        printf("i mod primes[j] == 0\n");
        //goto skip;
      }
      else if(j == numPrimes - 1) {
        primes[numPrimes++] = i;
        printf("prime %d = %ld\n", j, primes[j]);
      }
    }
    skip:;
  }
  for(int i = 0; i < numPrimes; i++) {
    printf("prime[%d] = %d\n", i, primes[i] );
    primeSum += primes[i];
  }
  printf("numPrimes = %d\nPrime Sum = %li\n", numPrimes, primeSum);

  return 0;
}
