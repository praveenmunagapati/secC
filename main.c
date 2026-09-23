#include <stdio.h>
int main(void) {
    setbuf(stdout, 0);

    int numbers[] = {42, 17, 89, 3, 65, 23};
    //swaping
    int a = 10;
    int b =20;
    printf("\nbefore swaping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nafter swaping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("\nbefore swaping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
     //without third varibale
    a = (a*b)/(b=a);
    printf("\nafter swaping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    //bubble sort
    for (int i = 0; i < 6; ++i) {

    }

    return 0;
}
