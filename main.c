#include <stdio.h>
//call by value
void print(int h) {
  printf("in print h %p\n",&h);
  printf("%d\n",h);
  return;
}
//call by reference
void printr(int *ph) {
  printf("in print ph address %p\n",ph);
  printf("%d\n",*ph);
  *ph = 89;
  return;
}
int main(void) {
  setbuf(stdout, 0);
  int h = 15;
  printf("in main h %p\n",&h);
  print(h);
  h = 20;
  printf("in main h  addresss %p\n",&h);

  printf("in main h %d\n",h);
printr(&h);
  printf("in main h value after printr %d\n",h);

}