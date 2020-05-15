//
// Created by mac on 2020/5/11.
//
#include "../sqlist_h/SqlistDef.h"
void initSqList(Sqlist *L) {    //初始化顺序表
    L->elem = (ElemType *) malloc(LIST_INIT_SIZE * sizeof(ElemType));
    //如果内存分配失败，退出程序
    if (!L->elem) {
        exit(0);
    }
    L->length = 0;
    L->list_size = LIST_INIT_SIZE;
}

void print(Sqlist L) {

    int i;
    static int j = 1;
    switch (j) {
        case 1:         //第一次调用print函数
            break;
        case 2:
            printf("插入后"); //第二次调用print函数
            break;
        case 3:
            printf("删除第7个元素后");//第三次调用print函数
            break;
        case 4:
            printf("销毁后");
            break;
    }

    printf("顺序表中的元素为:\n");

    for (i = 0; i < L.length; i++)

        printf("%d\t", L.elem[i]);      //依次输出顺序表中的元素
    j++;

    printf("\n");
}

void creat(Sqlist *L) {

    int i, a;

    printf("请输入要创建的元素的个数:");

    scanf("%d", &a);

    for (i = 0; i < a; i++) {      //(2)写入数据元素

        printf("请输入第%d个元素:", i + 1);

        scanf("%d", &L->elem[i]);

        L->length++;

    }
    printf("顺序表的长度为：%d\n", L->length);//（4）输出顺序表长度
    print(*L);

}

void insert(Sqlist *L) {
    int k = L->length;
    L->length++;
    for ( ; k >= 3; k--) {               //在第三个位置上插入元素56
        L->elem[k + 1] = L->elem[k];
    }
    L->elem[k + 1] = 56;
    printf("插入后顺序表元素个数为：%d\n", L->length);    //(9)输出顺序表长度
    print(*L);

}

void deleat(Sqlist *L) {
    int i;
    for (i = 6; i < L->length; i++) {
        L->elem[i] = L->elem[i + 1];
    }
    L->length--;
    print(*L);       //(11)输出顺序表 L

}

void destroy(Sqlist *L) {
    free(L->elem);    //释放内存
    L->elem = NULL;   //防止悬空指针
    L->length = 0;    //修改节点个数
    L->list_size = 0; //修改空间大小
    print(*L);

}
