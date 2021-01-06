#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));


  char b = 'a';

  // print value and size of an char variable
  printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));


  float c = 1.234;

  // print value and size of an float variable
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));


  double d = 123.456;

  // print value and size of an double variable
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));


  unsigned int e = 5;

  // print value and size of an unsigned int variable
  printf("unsigned e value: %d and size: %lu bytes\n", e, sizeof(e));


  signed int f = -5;

  // print value and size of an signed int variable
  printf("signed f value: %d and size: %lu bytes\n", f, sizeof(f));
}

