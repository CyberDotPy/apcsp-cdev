#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);


  float d = 1.5;
  float e = 2.25;

  printf("The value of d is %f and the address is %p\nThe value of e is %f and the address is %p\n", d, (void*)&d, e, (void*)&e);

  float* pointerd = &d;
  float* pointere = &e;
  float tmpvar = *pointerd;

  *pointerd = *pointere;
  *pointere = tmpvar;

  printf("d is now %f\n", *pointerd);
  printf("e is now %f\n", *pointere);
}
