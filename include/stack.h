#ifndef __MY_STACK_H_
#define __MY_STACK_H_

/**
 * @brief 入栈操作.
 *
 * @param stack
 * @param top
 * @param val
 * @return int
 */
int push(int *stack, int top, int val);

/**
 * @brief 出栈操作.
 *
 * @param stack
 * @param top
 * @return int
 */
int pop(int *stack, int top);

#endif