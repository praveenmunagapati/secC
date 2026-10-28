#include <stdio.h>
#include <string.h>
int stringlen(char *string) {
    char *dstring = string;
    while (*dstring) {
        dstring++;
    }
    return dstring - string;
}
int stringlenr(char *string) {
    // if (*string == 0) {
    //     return  0;
    // }
    // return 1 + stringlenr(string+1);
    return *string ? 1 + stringlenr(string+1):0;
}
int main() {
    setbuf(stdout,0);
    char *name = "karthika";
    printf("%c\n",*name);
    printf("%s\n",name);
    printf("%p\n",name);
    int i = 0;
    char *dstring = name;
    while (*dstring) {
        dstring++;
        i++;
    }
    printf("%d\n",i);
    printf("%d\n",strlen(name));
   printf("%d\n",stringlen(name));
   printf("%d\n",stringlenr(name));
    return 0;
}

