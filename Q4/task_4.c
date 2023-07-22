#include <stdio.h>

int main() {
  printf("Question 4 of the Embedded systems CA\n\n");

  //initialize int variables a = 10, b = 20, c = 30
  int a = 10;
  int b = 20;
  int c = 30;

  //add values of a and b, store it in a new int variable d and print value of variable d
  int d = a + b;

  printf("Sum of %d and %d is %d\n\n", a, b, d);

  //subtract variable c from d and store in new int variable e and print the value of variable e
  int e = d - c;

  printf("Substracting %d from %d is %d\n\n", c, d, e);
  
}