#ifndef __STACK_LINKED_H__
#define __STACK_LINKED_H__

struct stack_linked {
  int data;
  struct stack_linked *next;
};

typedef struct stack_linked LinkStack;

LinkStack *push(LinkStack *ls, int val);

LinkStack *pop(LinkStack *ls);
#endif