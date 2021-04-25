#include "../inc/passed_count.h"
#include <stdio.h>

/**
 * Read the n numbers and return the count of number which are greater than or
 * equal to number m.
 */

size_t pass_count(size_t n, size_t m) {
  size_t cnt = 0;
  for (size_t i = 0; i != n; ++i) {
    size_t tmp = 0;
    scanf("%zu", &tmp);
    if (tmp >= m) {
      ++cnt;
    }
  }
  return cnt;
}