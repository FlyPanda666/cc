// #include "table.h"
// #include "link_list.h"
// #include "stack.h"
#include "stack_linked.h"
#include <stdio.h>


// void test_table() {
//     Table t1=initTable();
//     for (int i=0; i< SIZE; i++) {
//         t1.data[i]=i;
//         t1.length++;
//     }
//     printf("原顺序表:\n");
//     displayTable(t1);
  
//     printf("删除索引为1的元素:\n");
//     t1=delTable(t1, 1);
//     displayTable(t1);
  
//     printf("在索引为2的位置插入元素5:\n");
//     t1=addTable(t1, 5, 2);
//     displayTable(t1);
  
//     printf("查找元素3的索引:\n");
//     int add=selectTable(t1, 3);
//     printf("%d\n",add);
  
//     printf("将元素3改为6:\n");
//     t1=amendTable(t1, 3, 6);
//     displayTable(t1);
// }

// void test_link_list() {
//     Link* p = initLink();
//     printf("初始化链表为:\n");
//     displayLink(p);
//     printf("在第 3 的位置上添加元素 6:\n");
//     insertElement(p, 6, 3);
//     displayLink(p);
//     printf("删除元素4:\n");
//     deleteElement(p, 4);
//     displayLink(p);
//     printf("查找元素 2:\n");
//     printf("元素 2 的位置为:%d\n", selectElement(p, 2));
//     printf("更改元素 1 的值为 6:\n");
//     amendElement(p, 1, 6);
//     displayLink(p);
//     Link_free(p);
// }

// void test_stack() {
//     int a[100];
//     int top = -1;
//     top = push(a, top, 1);
//     top = push(a, top, 2);
//     top = push(a, top, 3);
//     top = push(a, top, 4);
//     top = pop(a, top);
//     top = pop(a, top);
//     top = pop(a, top);
//     top = pop(a, top);
//     top = pop(a, top);
// }

void test_stack_linked() {
    LinkStack* stack = NULL;
    stack = push(stack, 1);
    stack = push(stack, 2);
    stack = push(stack, 3);
    stack = push(stack, 4);
    stack = pop(stack);
    stack = pop(stack);
    stack = pop(stack);
    stack = pop(stack);
    stack = pop(stack);
}
int main(void) {
    test_stack_linked();
    return 0;
}