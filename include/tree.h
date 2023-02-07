#ifndef __TREE_H_
#define __TREE_H_

typedef int DataType;

struct tree {
  // data用来存放根数据,使用的方式和table以及linklist一致.
  DataType data;
  // left指针用来表示该节点的左孩子
  struct tree *left;
  // right指针用来表示该节点的右孩子
  struct tree *right;
};

typedef struct tree Tree;

#endif //__TREE_H_