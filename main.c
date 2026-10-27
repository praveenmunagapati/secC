#include <stdio.h>
void foo(void) {//cant terminate
    printf("foo");
    foo();
}
void foo1(int i) {//cant terminate
    printf("%d\n",i);
    foo1(i+1);
}
void foo2(int i) {//can be terminated with return condition
    if (i == 11) {
        return;
    }
    printf("%d\n",i);
    foo2(i+1);
}
int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}
int sumofnatuaral(int num) {
    if (num == 1) {
        return 1;
    }
    return num + sumofnatuaral(num - 1);
}

int main() {
    setbuf(stdout,0);
    //foo();
    //foo1(1);
    //foo2(1);
    int num   = 5;
    int result = 1;
    for (int i = num; i > 0; --i) {
        result*=i;
    }
    printf("%d\n",result);
    printf("%d\n",factorial(5));
    num   = 100;
    result = 0;
    for (int i = num; i > 0; --i) {
        result+=i;
    }
    printf("%d\n",result);

    printf("%d\n",sumofnatuaral(100));




    return 0;
}

