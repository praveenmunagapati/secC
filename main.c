#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
/*
    *a) Write a C program, which takes two integer operands
    *and one operator from the user, performs
    the operation and then prints the result.
    (Consider the operators +,-,*, /, % and use Switch
    Statement). */
    int a ,b;
    char ops;
    a = 15;
    b = 45;
    ops = '?';
    switch (ops) {
        case '+': printf("%d + %d = %d",a,b,a+b);break;
        case '-': printf("%d - %d = %d",a,b,a-b);break;
        case '*': printf("%d * %d = %d",a,b,a*b);break;
        case '/': printf("%d // %d = %f",a,b,(float)a/b);break;
        case '%': printf("%d mod %d = %d",a,b,a%b);break;
            default:printf("no ops");break;
    }
    return 0;
}
