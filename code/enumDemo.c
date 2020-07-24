#include<stdio.h>

/*********************/
/*         枚举      */
/*********************/

enum COLOR {RED, YELLOW, GREEN}; // red是0，yelow是1，green是2

// 声明时可以指定值
// enum COLOR {RED = 1, YELLOW = 2, GREEN = 3};

int main() {
    enum COLOR colorName = RED;
    printf("%d\n", colorName);

    return 0;
}        

