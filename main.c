#include <stdint.h>
#include <stdio.h>
static int i = 0;
int foo() {
    static int i = 0;
    ++i;
    return i;
}
int main(void) {
    setbuf(stdout, 0);
    //scope and lifetime
    //storage classes
     auto signed int i = 10;
     printf("%d\n",i);
     {
         auto signed int j = 5;
         printf("%d\n",j);
     }
   // printf("%d\n",j);
    printf("%d\n",foo());
    printf("%d\n",foo());
    printf("%d\n",foo());

      {
         static signed int j = 5;//local
         printf("%d\n",j);
     }
     //printf("%d\n",j);//still cant access
    printf("%d\n",i);

    return 0;
}
