#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    // c can process only 3 types
    /* integers
     * fractions
     * character
     */
    //ipo
    //i input
    // p processing
    //o output

   //  //arthematic
   //  // + - / * %
   //
   //  // int a = 5,b = 6;
   //  int a;
   //  a = 5;
   //  int b;
   //  b = 6;
   //  int c;
   //  c = 15;
   //  // +  is binary operator
   //  int sum = a + b;
   //  printf("%d\n", sum);
   //  int sumc = a + b + c + 5;
   //  printf("%d\n", sumc);
   //
   //  int d = 10;
   //
   //  int minusab = a - b + c;
   //  printf("%d\n", minusab);
   //
   //  int mul = a * b;
   //  printf("%d\n", mul);
   //
   //  int mixl = a + b * d - c;
   //  // int mixl = b * d + a;
   //  printf("%d\n", mixl);
   //
   //  // division
   //  // /
   //  // data conversion
   //  //implisit short -> int -> long
   //  float x = 19/9;
   //  printf("%f\n", x);
   //  short s = 15;
   //  int j = s;
   // printf("%d\n",s);
   //  unsigned int integer = 4294967295;
   //  printf("%u\n",integer);
   //  unsigned short shortint = integer;
   //  //bin(1234567890)
   //  //'1001001100101100000001011010010'
   //  //bin(722)
   //  //'1011010010'
   //  printf("%u\n",shortint);
   //
   //  int f = 42949.67295;
   //  printf("%d\n",f);
   //
   //  x = (float)s/9;
   //  printf("%f\n", x);
   //  printf("%f\n",(float)22/7);
   //
   //  a = 5;
   //  b = 6;
   //  c = 7;
   //  d = 8;
   //  //            5  +    48 -     1
   //  float  mixp = a + b * d - c / 5;
   //  printf("%f\n",mixp);
   //
   //  int div = 11/2;
   //  int mod = 4%3;
   //  printf("%d\n",div);
   //  printf("%d\n",mod);
   //  a = 5;
   //  b = 6;
   //  c = 7;
   //  d = 8;
   //  float  mixm = a + b * d - c / 5  % 11;
   //  printf("%f\n",mixm);

    //inc dec
    //++ --
    // pre inc
    int x = 10;
    int preinc = ++x;
    // x = x + 1 - > int preinc = x;
    printf("%d\n",x);
    printf("%d\n",preinc);
    //pre dec
    int y = 10;
    int predec = --y;
    // y = y - 1 - > int predec = y ;
    printf("%d\n",x);
    printf("%d\n",predec);
    int z = 10;
    int postinc = z++;
    // int postinc = z; -> z = z + 1
    printf("%d\n",z);
    printf("%d\n",postinc);
    // //pre dec
    // int y = 10;
    // int predec = --y;
    // // y = y - 1 - > int predec = y ;
    // printf("%d\n",x);
    // printf("%d\n",predec);

    return 0;
}
