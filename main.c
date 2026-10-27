#include <stdio.h>
#include<string.h>


size_t __cdecl mystrlen(const char *_Str) {
    const char *s = _Str;

    // Increment the pointer until the null terminator ('\0') is reached
    while (*s) {
        s++;
    }
    // Return the difference between the end pointer and the start pointer
    return (size_t)(s - _Str);
}
int main() {
    setbuf(stdout,0);

    char csmc_students[3][20] = {{'r','a','j','u'},{'r','a','n','i'},{'a','b','h','i'}};
    printf("%d\n",sizeof(csmc_students));
    csmc_students[0][0] = 'r';
    csmc_students[0][1] = 'a';
    csmc_students[0][2] = 'j';
    csmc_students[0][3] = 'u';
    csmc_students[1][0] = 'r';
    csmc_students[1][1] = 'a';
    csmc_students[1][2] = 'n';
    csmc_students[1][3] = 'i';
    csmc_students[2][0] = 'a';
    csmc_students[2][1] = 'b';
    csmc_students[2][2] = 'h';
    csmc_students[2][3] = 'i';

    strcpy(csmc_students[0],"sindhura");
    strcpy(csmc_students[1],"vamshi");
    strcpy(csmc_students[2],"raj");

    char *me = "raj";
    printf("%s\n",me);
    printf("%c\n",*me);
    printf("%d\n",sizeof(*me));
    printf("%p\n",me);
    printf("%d\n",sizeof(me));
    printf("%d\n",mystrlen(me)*sizeof(char));
    printf("%c\n",me[1]);
    // me[1] = 'A';//cant change
    // printf("%c\n",me[1]);

    char *names[3] = {"nishika","ram","sita"};
    printf("%s\n",names[0]);
    printf("%s\n",names[1]);
    printf("%s\n",names[2]);
    char myname[10];
    strcpy(myname,"ruchika");
    printf("%s\n",myname);
    strrev(myname);
    printf("%s\n",myname);
    strcpy(myname,"ruchika");
    printf("%c\n",strchr(myname,'i'));
    printf("%s\n",strstr("String Library Functions","Library"));
    printf("%d\n",strcmp("hi","hj"));

    return 0;
}

