#include <stdint.h>
#include <stdio.h>
int main(void) {
    setbuf(stdout, 0);
    //scope and lifetime
    //storage classes
    register int i = 10;
    printf("%d\n",i);
    {
        register  int i = 5;
        printf("%d\n",i);
    }
    printf("%d\n",i);

    printf("demo register start\n");
    for (register int k = 0;k<=2000000000;k++ );
    printf("demo register end\n");
    printf("demo ram start\n");
    for (int k = 0;k<=2000000000;k++ );
    printf("demo ram end\n");

    printf("%d\n",sizeof i);
    printf("%p\n",&i);//cant access

    return 0;
}
