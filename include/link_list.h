#ifndef __LINK_LIST_H_
#define __LINK_LIST_H_
#define SIZE 5
typedef int DataType;

struct node {
  // data用来存放数据域的数值,这里采用和table一样的表示形式.
  DataType data;
  // next指针用来指向下一个元素的首地址
  struct node *next;
};

typedef struct node Link;
/**
 * @brief 初始化一个链表.
 * 链表中概念:头指针,首元结点,头节点.
 * 头指针: 本质上就是一个指针,它的特点是永远指向链表的第一个节点.
 * 首元节点: 链表中第一个存储数据的节点,这是因为头节点的存在,而首元结点才是我们之前说的头节点.
 * 头节点: 其实就是一个不存数据的空节点,通常作为链表的第一个节点,之前我们涉及到的虚拟头节点其实就是这个头节点.
 */
Link *initLink();

/**
 * @brief 添加元素.
 * 
 * @param p 需要操作的链表的头节点.
 * @param element 插入的元素. 
 * @param index 元素插入的位置索引.
 */
void insertElement(Link *p, int element, int index);

/**
 * @brief 删除元素.
 * 
 * @param p 
 * @param element 
 * @return int 删除成功返回1,删除失败返回-1.
 */
int deleteElement(Link *p, int element);

/**
 * @brief 查找元素.
 * 
 * @param p 链表的头指针.
 * @param element 需要查找的元素.
 * @return int 
 */
int selectElement(Link *p, int element);

/**
 * @brief 修改链表元素.
 * 
 * @param p 链表的头指针.
 * @param oldElement 需要修改的节点值.
 * @param newElement 修改之后节点的值.
 * @return int 
 */
int amendElement(Link *p, int oldElement, int newElement);

/**
 * @brief 释放链表.
 * 
 * @param p 
 */
void Link_free(Link *p);

/**
 * @brief 打印链表.
 *
 * @param p
 */
void displayLink(Link *p);

#endif //__LINK_LIST_H_