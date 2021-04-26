#include "../inc/get_uint.h"
#include "../inc/flush.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

char get_uint(size_t *n) {
  *n = 0;
  char ch = '\0';
  while ((ch = getchar()) != EOF && isdigit(ch)) {
    *n *= 10;
    *n += ch - '0';
  }
  return ch;
}