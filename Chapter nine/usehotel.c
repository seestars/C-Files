// usehotel.c —— 房间费率程序
// 与程序清单 9.10 一起编译
#include <stdio.h>
#include "hotel.h" /* 定义符号常量，申明函数 */

int main(void)
{
    int nights;
    double hotel_race;
    int code;

    while ((code = menu()) != QUIT)
    {
        switch (code)
        {
            case 1:
                hotel_race = HOTEL1;
                break;
            case 2:
                hotel_race = HOTEL2;
                break;
            case 3:
                hotel_race = HOTEL3;
                break;
            case 4:
                hotel_race = HOTEL4;
                break;
            default:
                hotel_race = 0.0;
                printf("Oops!\n");
                break;
        }
        if (code == 0.0)
            continue;
        nights = getnights();
        showprice(hotel_race, nights);
    }
    printf("Thank you and goodbye.\n");

    return 0;
}