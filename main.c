#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);

    //void
    //char
    //int
    //short
    //long
    //float
    //double
    //signed
    //unsinged
    //if
    //else
    //switch
    //case
    //break
    //while
    //do
    //for
    //continue
    //goto
    //return
    //arthematics + - / * %
    //inc dec   ++ --
    //relational > < <= >= == !=
    //logical && || ! \
    //bitwise  & |  ^ ~ << >>
    //assigment = += -= *= &=
    //camma ,
   /*
    *Simple numeric problems:
    a) Write a program for finding the max and min from the three numbers.
    b) Write the program for the simple, compound interest.
    c) Write a program that prints a multiplication table for a given number and the number of rows in
    the table. For example, for a number 5 and rows = 3, the output should be:
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    d) Write a program that shows the binary equivalent of a given positive number between 0 to 255.
    */

    //a) Write a program for finding the max and min from the three numbers.
    int num1,num2,num3;
    num1 = 15;
    num2 = -15;
    num3 = 15;
   //  printf("num1 address %p\n",&num1);
   //  printf("num2 address%p\n",&num2);
   //  printf("num3 address%p\n",&num3);
   //  printf("emter num1 value : ");
   // scanf("%d",&num1);
   //  printf("emter num2 and num3 values : ");
   //  scanf("%d%d",&num2,&num3);
   //  printf("%d\n",num1);
   //  printf("%d\n",num2);
   //  printf("%d\n",num3);
    int max,min;
    // if (num1>num2) {
    //     if (num1>num3) {
    //         max = num1;
    //     }
    // }
    if (num1>=num2&&num1>=num3) {
        max = num1;
    }
    if (num2>=num1&&num2>=num3) {
        max = num2;
    }
    if (num3>=num1&&num3>=num2) {
        max = num3;
    }
    printf("max of %d,%d,%d is %d\n",num1,num2,num3,max);
    if (num1<=num2&&num1<=num3) {
        min = num1;
    }
    if (num2<=num1&&num2<=num3) {
        min = num2;
    }
    if (num3<=num1&&num3<=num2) {
        min = num3;
    }
    printf("min of %d,%d,%d is %d\n",num1,num2,num3,min);
    return 0;
}
