#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *x;
  x = calloc(1, sizeof(int));

  if (x == NULL)
    printf("메모리 할당 실패.\n");
  else {
    *x = 57;
    printf("*x=%d\n", *x);
    free(x);
  }
}
