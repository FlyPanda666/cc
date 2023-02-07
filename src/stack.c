#include <stdlib.h>
#include <stdio.h>

/**
 * @brief 入栈操作.
 * 
 * @param stack 
 * @param top 
 * @param val 
 * @return int 
 */
int push(int* stack, int top, int val) {
    stack[++top] = val;
    return top;
}

int pop(int* stack, int top) {
    if (top == -1) {
        printf("空栈没有出栈操作.\n");
        return -1;
    }
    printf("弹栈元素:%d\n", stack[top]);
    top--;
    return top;
}