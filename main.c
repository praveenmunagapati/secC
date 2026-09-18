#include <ctype.h>
#include <stdio.h>
#include<math.h>
int main(void) {
  setbuf(stdout, 0);
  printf("%lf\n",floor(1.2));
  printf("%lf\n",ceil(1.2));
  printf("%lf\n",pow(2,16));
  printf("%lf\n",sqrt(4));
  printf("%d\n",isalpha('b'));
  printf("%d\n",ispunct(1));

}