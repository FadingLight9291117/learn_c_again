#include<stdio.h>

/********************************/
/*      1. 声明结构的三种形式     */
/********************************/

/* 声明一个结构体1 */
struct date {
        int year;
        int month;
        int day;
};

/* 声明一个结构体2, 匿名结构体 */
struct {
        int year;
        int month;
        int day;
} d;

/* 声明一个结构体3 */
struct date1 {
        int year;
        int month;
        int day;
} d1, d2;

int main() {

        /*****************************/
        /*      2. 结构的初始化       */
        /*****************************/
        // 第一种
        struct date today = {2020, 7, 23};
        // 第二种
        struct date today2 ={.year = 2020, .month = 3, .day = 22};
        
        printf("Today's date is %i-%i-%i.\n", today.year, today.month, today.day);


        /****************************/
        /*      3. 结构的运算        */
        /****************************/
        d1 = (struct date1){2020, 2, 21};

        printf("%i-%i-%i.\n", d1.year, d1.month, d1.day);


        d2 = d1;
        d1.year = 2019; // d2 不会变化.

        printf("%i-%i-%i.\n", d2.year, d2.month, d2.day);


        /****************************/
        /*      4. 结构指针         */
        /***************************/
        struct date *yesterday = &today;
        printf("%i-%i-%i.\n", yesterday->year, yesterday->month, yesterday->day);
        return 0;
} 
