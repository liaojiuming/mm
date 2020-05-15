#include "../sqlist_h/SqlistDef.h"
int main() {
    int i;
    Sqlist L;             //新建顺序表L
    initSqList(&L);       //初始化顺序表
    creat(&L);            //为顺序表L添加元素

    if (L.length == 0)  //(5)判断是否为空
        printf("顺序表为空！\n");
    else
        printf("顺序表不为空！\n");
    printf("顺序表L的第3个数据元素为：%d\n", L.elem[2]);//(6)输出顺序表L的第三个数据元素
    for (i = 0; i < L.length; i++)     //(7)输出数据元素76的位置
    {
        if (L.elem[i] == 76)
            printf("数据元素76的位置为：%d\n", i + 1);
    }
    insert(&L);//插入元素
    deleat(&L);//删除元素
    destroy(&L);//销毁数序表

    return 0;

}