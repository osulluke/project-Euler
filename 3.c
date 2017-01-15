#include <stdio.h>
#include <math.h>


#define MAXPRIMES 10000
#define MAXNUMBER 600851475143

int main(void) {
  long primes[MAXPRIMES];
  long maxPrime = MAXNUMBER;
  int numPrimes = 3, tempPrime = 1;
  primes[0] = 2; primes[1] = 3; primes[2] = 5;

  for (int i = 7; i < sqrt(MAXNUMBER); i+=2) {
    if(maxPrime < i) break;

    for(int j = 0; j < numPrimes; j++) {
      if (i % primes[j] == 0) {
        break;
      }
      else if (j == numPrimes - 1) {
        primes[numPrimes++] = i;
        while(maxPrime % i == 0) {
          maxPrime /= i;
          printf("factor: %d\n", i);
        }
      }
    }
  }

  return 0;
}
