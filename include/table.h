#ifndef __TABLE_H_
#define __TABLE_H_
#define SIZE 5
typedef int DataType;

struct table {
  // data用来存放数据,考虑到顺序表中可以存放不同的数据类型,为了方便使用,定义一个新的类型别名.
  DataType* data;
  // length用来存放table中存放的元素个数
  int length;
  // size用来表示table的大小
  int size;
};

typedef struct table Table;

/**
 * @brief 初始化顺序表.
 * 
 * @return Table 
 */
Table initTable();

/**
 * @brief 向顺序表中插入元素.
 * 
 * @param t 
 * @param elem 
 * @param add 
 * @return Table 
 */
Table addTable(Table t, int elem, int add);

/**
 * @brief 删除顺序表用的元素.
 * 
 * @param t 
 * @param add 
 * @return Table 
 */
Table delTable(Table t, int add);

/**
 * @brief 修改顺序表中的元素.
 * 
 * @param t 
 * @param elem 
 * @param newElem 
 * @return Table 
 */
Table amendTable(Table t, int elem, int newElem);

/**
 * @brief 查找顺序表用的元素.
 *
 * @param t
 * @param elem
 * @return int
 */
int selectTable(Table t, int elem);

/**
 * @brief 遍历顺序表中的元素.
 * 
 * @param t 
 */
void displayTable(Table t);

#endif //__TABLE_H_