#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    //scope and life time
    int a = 20;
    {
        int a = 10;
        printf("%d",a);
        {
            printf("%d",a);
        }
    }
    printf("%d",a);

    return 0;
}
