#include "table.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 初始化顺序表.
 * 
 * @return Table 
 */
Table initTable() {
    Table t;
    t.size = SIZE;
    t.length = 0;
    t.data = (DataType *)calloc(t.size, sizeof(DataType));
    if (! t.data) {
        printf("初始化失败.\n");
        exit(0);
    }
    return t;
}

/**
 * @brief 向顺序表中插入元素.
 * 
 * @param t 需要操作的顺序表
 * @param element 插入的元素
 * @param index 插入元素的索引
 * @return Table 
 */
Table addTable(Table t, int element, int index) {
    if (index < 0 || index > t.length) {
        printf("插入位置错误!\n");
        return t;
    }
    if (t.length >= t.size) {
        t.size *= 2;
        t.data = (DataType *)realloc(t.data, t.size);
        if (!t.data) {
            printf("申请新内存失败!\n");
        }
    }
    for (int i = t.length; i >= index; i--) {
        t.data[i + 1] = t.data[i];
    }
    t.data[index]= element;
    t.length++;
    return t;
}

/**
 * @brief 删除顺序表用的元素.
 * 
 * @param t 需要操作的顺序表
 * @param index 需要删除元素的索引
 * @return Table 
 */
Table delTable(Table t, int index) {
    if (index < 0 || index > t.length) {
        printf("需要删除的索引错误!\n");
        return t;
    }
    for (int i = index; i < t.length; i++) {
        t.data[i] = t.data[i + 1];
    }
    t.length--;
    return t;
}

/**
 * @brief 查找顺序表用的元素.
 *
 * @param t 需要查询的顺序表.
 * @param element 需要查询的元素.
 * @return int 返回元素在顺序表中的索引.
 */
int selectTable(Table t, int element) {
    for (int i = 0; i < t.length; i++) {
        if (t.data[i] == element) {
            return i;
        }
    }
    // 如果没有找到元素,返回-1.
    return -1;
}

/**
 * @brief 修改顺序表中的元素.
 * 
 * @param t 需要操作的顺序表
 * @param element 需要更改的元素 
 * @param newElement 修改元素的新值 
 * @return Table 
 */
Table amendTable(Table t, int element, int newElement) {
    int index = selectTable(t, element);
    t.data[index] = newElement;
    return t;
}

/**
 * @brief 变量顺序表中的元素.
 * 
 * @param t 需要操作的顺序表.
 */
void displayTable(Table t) {
    for (int i = 0; i < t.length; i++) {
        printf("%d ", t.data[i]);
    }
    printf("\n");
}