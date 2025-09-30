#include <stdio.h>

int main(void) {

    int year = 2025,
        mth = 9,
        day = 30;

    day++;

    if (day >= 30) {
        mth++;
        day = 1;

        if (mth >= 12) {
            year++;
            mth = 1;
        }

    }
    printf("Date:%d년 %d월 %d일", year, mth, day);
    return 0;
}