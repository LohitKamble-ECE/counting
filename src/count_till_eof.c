#include "../inc/count_till_eof.h"
#include "../inc/get_uint.h"
#include <stddef.h>
#include <stdio.h>

size_t count_till_eof(size_t m) {
  size_t cnt = 0;
  size_t tmp = 0;
  while (get_uint(&tmp) != EOF) {
    printf("%zu ", tmp);
    if (tmp >= m) {
      ++cnt;
    }
  }
  return cnt;
}