#include <stdio.h>
#include <string.h>
int main(void) {
    setbuf(stdout, 0);
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

    int csmc_students_marks[3] = {56,64,51};
    for (int i = 0; i < 3; ++i) {
        printf("student name %s marks %d\n",csmc_students[i],csmc_students_marks[i]);
    }

    return 0;
}
