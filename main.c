#include <stdint.h>
#include <stdio.h>
void sum(void) {
    //Write a program that calculates
    //the sum of all even numbers
    //between 1 and 100 using a for loop.
    //Explain your logic.
    int totaleven = 0;
    int totalodd = 0;
    for (int i = 1; i <= 100; ++i) {
        if (i%2==0)
            totaleven+=i;
        else
            totalodd+=i;
    }
    printf("%d\n",totaleven);
    printf("%d\n",totalodd);
    printf("%d\n",(100*(100+1))/2);
    printf("%d\n",totaleven +totalodd );

}
void mul() {
    for (int i = 1; i < 5; ++i) {
        for (int j = 1; j <= 10; ++j) {
            printf("%d x %d = %d\n" ,i,j,i*j);
        }
        printf("\n");
    }

}
int main(void) {
    setbuf(stdout, 0);
    //scope and lifetime
    //storage classes
    // register int i = 10;
    // printf("%d\n",i);
    // {
    //     register  int i = 5;
    //     printf("%d\n",i);
    // }
    // printf("%d\n",i);
    //sum();
    mul();
//     printf("demo register start\n");
//     for (register int k = 0;k<=2000000000;k++ );
//     printf("demo register end\n");
//     printf("demo ram start\n");
//     for (int k = 0;k<=2000000000;k++ );
//     printf("demo ram end\n");
//
//     printf("%d\n",sizeof i);
//     //printf("%p\n",&i);//cant access
// printf("%d\n",7 + 3 * 2 );
    return 0;
}
