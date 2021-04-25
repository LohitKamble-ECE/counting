#include "../inc/passed_count.h"
#include <stdio.h>

int main(void) {
  printf("Enter the number of students: ");
  size_t n = 0;
  scanf("%zu", &n);
  printf("Enter the minimum number of marks that student must have to award "
         "him/her pass: ");
  size_t passed = 0;
  scanf("%zu", &passed);
  printf("The number student awarded pass are: %zu\n", pass_count(n, passed));
  return 0;
}