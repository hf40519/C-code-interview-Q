#include <stdio.h>
#include <stdlib.h>

void fun(int **p) // two pointer
{
  static int q = 10;
  *p = &q; // p本身的址的值 (p的指向址) = q的址
}

int main()
{
  int r = 20;
  int *p = &r;

  fun(&p);             // 需傳入pointer本身的位址 &p, 若直接傳p是傳入r的址
  printf("%d \n", r);  // 20
  printf("%d \n", *p); // 10

  return 0;
}