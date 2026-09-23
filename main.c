#include <stdio.h>

void bubblesort(int *numbers) {
    //bubble sort
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (numbers[i]<numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    return;
}
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
    printf("\nbefore sorting\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d \t",numbers[i]);
    }
    //bubble sort
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (numbers[i]>numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    printf("\nafter sorting\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d \t",numbers[i]);
    }

    int numbers1[] = {42, 74, 89, 3, 44, 7};
    printf("\nbefore sorting\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d \t",numbers[i]);
    }
    bubblesort(numbers1);
    printf("\nafter sorting\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d \t",numbers1[i]);
    }


    return 0;
}
