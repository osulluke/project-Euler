#include <stdio.h>

int sumSquare(int);
int squareSum(int);
int square(int);
int squareDiff(int);

int main(void) {
    int firstN = 100;
    printf("The sumSquare of 1st %d is %d\n", firstN, sumSquare(firstN));
    printf("The squareSum of 1st %d numbers is %d\n", firstN, squareSum(firstN));
    printf("The difference in these numbers is %d\n", squareDiff(firstN));
    
    return 0;
}

int sumSquare(int i) {
    int sum = 0;
    
    for(int j = 0; j <= i; j++) {
        sum += square(j);
    }
    
    return sum;
}

int squareSum(int i) {
    int sum = 0;
    
    for(int j = 0; j <= i; j++) {
        sum += j;
    }
    
    return square(sum);
}

int square(int i) {
    return i*i;
}

int squareDiff(int i) {
    return squareSum(i) - sumSquare(i);
}