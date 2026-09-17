#include <stdio.h>
//functions
//syntax
/*  return type functionname(parameters [only declaration ] ); signature
 *  {
 *
 *      statements
 *      return return type;
    }
    */
//b) Write the program for the simple, compound interest.

//4tytpes
void wopwor(void) {
    printf("no para no return\n");
    return;
}
void wpwor(int x) {
    printf("%d\n",x);
    return;
}

int wopwr(void) {
    return 127;
}
int wpwr(int a , int b) {
    return a+b;
}
//simple interrest
// si = ptr/100

float simpleinterest(int principle,int time,float rate);
int main(void) {
    setbuf(stdout, 0);
    wopwor();
    wpwor(1500);
    int i = wopwr();
    printf("%d\n",i);
    int sum  = wpwr(5,6);
    printf("%d\n",sum);
    int principle = 100000;
    int time = 12;
    float rate = 2.5;
    float si = simpleinterest(principle,time,rate);
    printf("%f\n",si);
    return 0;
}
float simpleinterest(int principle,int time,float rate) {
    // int principle = 100000;
    // int time = 12;
    // float rate = 2.5;
    //
    float si = (principle * time * rate )/100;
    return si;
    // printf("%f\n",si);
}