#include <stdio.h>

void move(char x, char y) {
    printf("%c-->%c\n", x, y);
}

void han(int n, char x, char y, char z) {
    if (n == 1) move(x, z);//只有一个盘子，直接从a-c
    else
    {
        han(n - 1, x, z, y);//将n-1个盘子从a-b
        move(x, z);             //将最后一个盘子从a-c
        han(n - 1, y, x, z); //再将n-1个盘子从b-c
    }
}

int main() {
    int n;
    printf("Please input the number of dishes:\n");
    scanf("%d", &n);//n个盘子
    han(n, 'a', 'b', 'c');
    return 0;
}
