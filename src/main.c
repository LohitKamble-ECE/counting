#include "../inc/count_till_eof.h"
#include "../inc/flush.h"
#include <stdio.h>

int main(void) {
  printf("Enter the minimum mark needed to award a student pass: ");
  size_t m = 0;
  scanf("%zu", &m);
  flush_buffer();
  printf("passed : %zu\n", count_till_eof(m));
  return 0;
}