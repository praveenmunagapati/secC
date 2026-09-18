#include <stdio.h>
//call by value
void print(int h) {
  printf("in print h %p\n",&h);
  printf("%d\n",h);
  return;
}
int main(void) {
  setbuf(stdout, 0);
  int h = 15;
  printf("in main h %p\n",&h);
  print(h);
  h = 20;
  printf("in main h %d\n",h);


}