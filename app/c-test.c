#include <stdio.h>
#include <stdlib.h>
#include "c-test.h"

void expect(char[] name, int x) {
  if (x) {
    fprintf(stderr, "Test %s has succeded!\n",name);
    exit(1);
  }
  fprintf(stderr, "Test %s has failed!\n", name);
}
