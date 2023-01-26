#include <stdio.h>

int main(void) {
  int count;

  printf("Enter a positive integer: ");
  scanf("%d", &count);

  while (count > 0) {
    printf("%d\n", count);
    count--;
  }

  printf("Blast off!\n");

  return 0;
}
