#include <stdio.h>
void callreference(int *pivar) {
    *pivar = 89;
    return;
}

int main(void) {
    setbuf(stdout, 0);
    //pointers
    int var = 10;
    printf("%d\n",var);
    printf("%p\n",&var);
    printf("%d\n",*(&var));

    int *pvar = NULL;
    printf("%d\n",pvar);
    pvar = &var;
    printf("%p\n",pvar);
    printf("%d\n",*pvar);
    float fvar = 1.5;
    //var = &fvar;//error cant assign another data type variable
    int ivar = 15;
    int *pivar = &ivar;
    printf("%d\n",var + ivar);
    printf("%d\n",*pvar + *pivar);
    //var = 56;
    *pvar = 56;
    printf("%p\n",&ivar);
    callreference(&ivar);
    printf("%d\n",pivar);
    printf("%d\n",*pivar+1);
    printf("%p\n",&pivar);

    int **dpivar =  &pivar;
    printf("%d\n",**dpivar);
    **dpivar = 150;
    //dpivar = &ivar;//cant can only holds pointer address of same type
    printf("%d\n",ivar);

    int ***Tpivar =  &dpivar;
    printf("%d\n",***Tpivar);
    ***Tpivar = 205;
    printf("%d\n",ivar);

    void *generic = NULL;
    generic  = &var;
    printf("%d\n",*(int*)generic);
    *(int*)generic = 10;
    printf("%d\n",var);
    generic = pivar;
    printf("%d\n",*(int*)generic);


    int array[5] = {1,2,3,4,5};
    array[0]  = 10 ;
    array[1]  = 15 ;
    array[2]  = 17 ;
    array[3]  = 16 ;
    array[4]  = 18 ;

    for (int i = 0; i < 5; ++i) {
        printf("%p\n",&array[i]);
    }
    printf("%p\n",&array[0]);
    printf("%p\n",array);

    int *parray = array;
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",array[i]);
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",i[array]);
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",*(array+i));
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *parray+i);
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *parray++);
    }
    parray = &array[4];

    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *parray--);
    }
    return 0;
}
