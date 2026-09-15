#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
    //if else switch case default break
    // looooops
    // while do for // break continue goto
    // 1 to 10 (1,2,3,4,5,6,7,8,9,10)
    //printf raw
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
    //using scalar
    printf("%d\n",1);
    printf("%d\n",2);
    printf("%d\n",3);
    printf("%d\n",4);
    printf("%d\n",5);
    printf("%d\n",6);
    printf("%d\n",7);
    printf("%d\n",8);
    printf("%d\n",9);
    printf("%d\n",10);
    int var = 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = var + 1;
    printf("%d\n",var);
    var = 1;
    // using var++
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);
    printf("%d\n",var++);

    //while
    /*
     * while(condion){
     * statements
     * }
     */
    // while (0) {
    //     printf("sindhuja\n");
    // }
    // while (1) {
    //     printf("sindhuja\n");
    // }
    var = 1;
    while (var <=10) {
    printf("%d\n",var++);
    }
    //entry  controlled loop
    while (0) {
        printf("sindhuja\n");
    }
    //exit controlled loop
    do{
        printf("sindhuja\n");
    } while (0);
    var = 1;
    while (var <=10) {
        printf("%d\n",var++);
    }
    for (int temp = 1;
        temp<=10;
        temp++)
    {
        printf("%d\n",temp);
    }
    //printf("%d\n",temp); //unclared
    //break continue goto
    printf("=======breaking infinite======\n");
    var = 1;
    while (1) {
        printf("%d\n",var++);
        if (var==10) {
            break;
        }
    }
    //continue
    printf("=======skipping loops======\n");

    var = 1;
    while (var <=10) {
        if (var%2 == 0) {
            var++;
            continue;
        }
        else {
            printf("%d\n",var++);
        }
    }
    for (int i = 1 ; i <=10;i++) {
        if (i == 5) {
            continue;
        }
        printf("%d\n",i);
    }
    for (int i = 1 ;
        i <=10;
        i++)
    {
        if (i == 5) {
            break;
        }
        printf("%d\n",i);

    }

    //goto
    //syntax label 2
    //goto lable
    printf("do not use\n");
    japam:
      printf("sindhuja\n");
    goto exit;
    goto japam;
    exit:
        printf("japam ends\n");

    return 0;
}
