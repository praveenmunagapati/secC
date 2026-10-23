#include <stdio.h>
#include <string.h>
#include <stddef.h> // Required for size_t

// size_t __cdecl strlen(const char *_Str) {
//     const char *s = _Str;
//
//     // Increment the pointer until the null terminator ('\0') is reached
//     while (*s) {
//         s++;
//     }
//
//     // Return the difference between the end pointer and the start pointer
//     return (size_t)(s - _Str);
// }
int __cdecl mystrcmp(const char *_Str1, const char *_Str2) {
    // Compare characters until they differ or a null terminator is reached
    while (*_Str1 && (*_Str1 == *_Str2)) {
        _Str1++;
        _Str2++;
    }

    // Return the difference between the mismatching characters
    return *(unsigned char *)_Str1 - *(unsigned char *)_Str2;
}

int main() {
    setbuf(stdout,0);
    char *name = "ksindhuja";//string constant readonly
    printf("%s\n",name);
    printf("%c\n",name[2]);
    // name[2] = 'j';
    printf("%d\n",strlen(name));
    printf("%s\n",name);
   // strcpy(name,"ruchika"); //seg fault
    int array[5] = { 1,2,3,4,5};
    array[2] = 9;
    printf("%d\n",array[2]);
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",array[i]);
    }
    char myname[10];
    strcpy(myname,"ruchika");
    printf("%s\n",myname);
    strrev(myname);
    printf("%s\n",myname);
    strcpy(myname,"ruchika");
    printf("%s\n",strchr(myname,'i'));
    printf("%s\n",strstr("String Library Functions","Library"));
    printf("%d\n",mystrcmp("hi","hi"));
    printf("%d\n",mystrcmp(name,myname));

    return 0;
}
