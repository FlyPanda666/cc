#include "link_list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 初始化一个链表.
 * 链表中概念:头指针,首元结点,头节点.
 * 头指针: 本质上就是一个指针,它的特点是永远指向链表的第一个节点.
 * 首元节点: 链表中第一个存储数据的节点,这是因为头节点的存在,而首元结点才是我们之前说的头节点.
 * 头节点: 其实就是一个不存数据的空节点,通常作为链表的第一个节点,之前我们涉及到的虚拟头节点其实就是这个头节点.
 */
Link *initLink() {
    // 创建头指针
    Link *p = NULL;
    // 创建头节点
    Link *tmp = (Link *)calloc(sizeof(Link), 1);
    if (NULL == tmp)
    {
        printf("申请链表失败!\n");
    }
    tmp->data = 0;
    tmp->next = NULL;
    // 头指针指向头节点.
    p = tmp;
    for (int i = 1; i < SIZE; i++) {
        Link *node = (Link *)calloc(sizeof(Link), 1);
        node->data = i;
        node->next = NULL;
        tmp->next = node;
        tmp = tmp->next;
    }
    return p;
}

/**
 * @brief 添加元素.
 * 
 * @param p 需要操作的链表的头节点.
 * @param element 插入的元素. 
 * @param index 元素插入的位置索引.
 */
void insertElement(Link *p, int element, int index) {
    Link *tmp = p;
    for (int i = 1; i < index; i++) {
        tmp = tmp->next;
    }
    Link *new_node = (Link *)calloc(1, sizeof(Link));
    new_node->data = element;
    new_node->next = tmp->next;
    tmp->next = new_node;
}

/**
 * @brief 删除元素.
 * 
 * @param p 
 * @param element 
 * @return int 删除成功返回1,删除失败返回-1.
 */
int deleteElement(Link *p, int element) {
    Link *tmp = p;
    Link *delete = NULL;
    int find = 0;
    while (tmp->next) {
        if (tmp->next->data == element) {
            find = 1;
            break;
        }
        tmp = tmp->next;
    }
    if (find == 0) {
        return -1;
    } else {
        delete = tmp->next;
        tmp->next = tmp->next->next;
        free(delete);
        delete = NULL;
        return 1;
    }
}

/**
 * @brief 查找元素.
 * 
 * @param p 链表的头指针.
 * @param element 需要查找的元素.
 * @return int 
 */
int selectElement(Link *p, int element) {
    // p是头指针,指向的是首元结点,p->next则表示p指向的是头节点.
    p = p->next;
    int i = 1;
    while (p) {
        if (p->data == element) {
            return i;
        }
        p = p->next;
        i++;
    }
    return -1;
}


/**
 * @brief 修改链表元素.
 * 
 * @param p 链表的头指针.
 * @param oldElement 需要修改的节点值.
 * @param newElement 修改之后节点的值.
 * @return int 
 */
int amendElement(Link *p, int oldElement, int newElement) {
    p = p->next;
    while (p) {
        if (p->data == oldElement) {
            p->data = newElement;
            return 1;
        }
        p = p->next;
    }
    return -1;
}

/**
 * @brief 释放链表.
 * 
 * @param p 
 */
void Link_free(Link* p) {
    Link* fr = NULL;
    while (p->next) {
        fr = p->next;
        p->next = p->next->next;
        free(fr);
    }
    free(p);
}

/**
 * @brief 打印链表.
 * 
 * @param p 
 */
void displayLink(Link *p) {
    if (NULL == p) {
        printf("链表为空");
        return;
    }
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}