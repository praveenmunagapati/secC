#include <stdio.h>
#include <string.h>
int main(void) {
    setbuf(stdout, 0);
    char name[10] ={'s','i','n','d','h','u','r','a','\0'};//null termination
    // for (int i = 0; i < 10; ++i) {
    //     printf("%c",name[i]);
    // }
    printf("%d\n",strlen(name));
    for (int i = 0; i < strlen(name); ++i) {
        printf("%c",name[i]);
    }

    printf("\n%s\n",name);
    puts(name);
    strcpy(name,"raj");
    printf("\n%s\n",name);

    char *me = "rani";
    printf("%p\n",me);
    printf("%s\n",me);

    char csmc_students[65][20];
    printf("\n%d\n",sizeof(csmc_students));


    return 0;
}
