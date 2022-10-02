#include <stdio.h>

#include "foo.h"

int main(int argc, char** argv)
{
  struct Foo f;

  f.a = 5;
  f.b = 10;

  printf("Here's the address of f: %ld\n",  (long) &f);
  printf("Here's f.a: %d\n", f.a);

  return 0;
}
