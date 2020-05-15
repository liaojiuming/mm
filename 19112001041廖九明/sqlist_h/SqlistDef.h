//
// Created by mac on 2020/5/11.
//

#ifndef PROJECT1_SQLISTDEF_H
#define PROJECT1_SQLISTDEF_H
#include "../sqlist_h/CommonDef.h"
typedef struct {
    ElemType *elem; //首元素地址
    int length;    //顺序表中元素的个数
    int list_size; //顺序表的空间大小
} Sqlist;          //定义Sqlist这个新的数据类型
void initSqList(Sqlist *L);//初始化
void creat(Sqlist *L);//(1)建立线顺序表
void print(Sqlist L);//(3)显示顺序表
void insert(Sqlist *L);//(8)在第四个位置上插入数据元素56
void deleat(Sqlist *L);//(10）删除顺序表的第七个元素
void destroy(Sqlist *L);//(12)销毁顺序表 L
#endif //PROJECT1_SQLISTDEF_H
