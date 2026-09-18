#include <stdio.h>
unsigned int ispalin(unsigned int num) {
  unsigned int total = 0;
  while (num!=0) {
    total = total + num%10;
    num = num/10;
  }
  return total;
}
int main(void) {
  setbuf(stdout, 0);
  // test given number is palindrome.
  // 1221 reverse 1221 is palindrome
  //151 reverse 151 is palindrom
    int num = 78465;
    int rnum = 0;
    while (num!=0) {
      rnum = rnum*10 + num%10;
      num = num/10;
    }
  printf("%d\n",rnum);

  return 0;
}