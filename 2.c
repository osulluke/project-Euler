#include <stdio.h>
#define SIZE 40
#define MAXFIB 4000000

int main(void) {
  int fibs[SIZE];
  long evensum = 0;
  fibs[0] = 1; fibs[1] = 2;

  printf("Fill array...\n");
  for(int i = 2; i<SIZE; i++) {
    fibs[i] = 0;
  }

  for(int i = 2; i<SIZE; i++) {
    if(fibs[i] > MAXFIB) break;
    fibs[i] = fibs[i-1] + fibs[i-2];
    printf("%d, %ld\n", i, fibs[i]);
  }

  for(int i = 0; i<SIZE; i++) {
    if(fibs[i] > MAXFIB) break;
    else if (fibs[i] % 2 == 0){
      evensum += fibs[i];
    }
  }

  printf("\nThe sum of even Fibonnaci #'s < MAXFIB is %li", evensum);

  return 0;
}
