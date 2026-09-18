#include <stdio.h>
int main(void) {
  setbuf(stdout, 0);
  int k = 10;
  printf("%d\n",k);
  printf("%p\n",&k);
  printf("%d\n",*(&k));

  //what is pointer variable holds only address
  int *pk;
  pk = &k;

  printf("%p\n",&pk);
  printf("%p\n",pk);
  printf("%p\n",&k);
  printf("%d\n",*pk);
  k = 15;
  printf("%d\n",k);
  *pk = 25;
  printf("%d\n",k);
  //errors
   float f = 1.6;
//   pk = f;
   long l = 17875;
//   pk = &l;
short s = 5;
//   pk = &s;
  int g = 105;
  pk = &g;
  printf("%d\n",*pk);
  void *gp ;
    gp = &f;
    printf("%f\n",*(float *)gp);
    gp = &l;
    printf("%d\n",*(long *)gp);
    gp = &s;
    printf("%d\n",*(short *)gp);


}