#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Xem ngay cua thang\n");
    printf("2- Kiem tra nam nhuan\n");
    printf("------------------\n");
    printf("chon STT chuc nang: \n");
    printf("------------------\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        namnhuan();
        menu();
        break;
    case 2:
        xemthang();
        menu();
        break;
    
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
