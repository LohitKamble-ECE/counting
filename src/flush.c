#include "../inc/flush.h"
#include <stdio.h>

void flush_buffer(void) {
  char ch = '\0';
  while ((ch = getchar()) != EOF && ch != '\n')
    ;
}