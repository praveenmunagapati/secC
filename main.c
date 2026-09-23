#include <stdio.h>
enum WEEK {
    MONDAY=-7,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
int main(void) {
    setbuf(stdout, 0);
    printf("%d\n",sizeof(enum WEEK));
    printf("%d\n",sizeof(MONDAY));
    printf("%d\n",MONDAY);
    printf("%d\n",TUESDAY);
    printf("%d\n",WEDNESDAY);
    printf("%d\n",THURSDAY);
    printf("%d\n",FRIDAY);
    printf("%d\n",SATURDAY);
    printf("%d\n",SUNDAY);
    //MONDAY = 15;//CANT THEY ARE NOT VARIABLES THEY ARE KEY VALUE PAIRS

    //machine tea coffee boost
    // 0 for tea 1 coffee 2 for boost
    int choice = 4;
    switch (choice) {
        case 1 : printf("you get tea");break;
        case 2 : printf("you get coffee");break;
        case 3 : printf("you get boost");break;
        default:printf("no choice\n");break;
    }
    enum  MACHINE {
        TEA = 1,
        COFFEE,
        BOOST
    };
    choice = COFFEE;
    switch (choice) {
        case TEA : printf("you get tea");break;
        case COFFEE : printf("you get coffee");break;
        case BOOST : printf("you get boost");break;
        default:printf("no choice");break;
    }

    return 0;
}
