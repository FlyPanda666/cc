#include "stack_linked.h"
#include <stdlib.h>
#include <stdio.h>

LinkStack *push(LinkStack *ls, int val) {
    LinkStack *tmp = (LinkStack *)calloc(1, sizeof(LinkStack));
    tmp->data = val;
    tmp->next = ls;
    ls = tmp;
    return ls;
}

LinkStack *pop(LinkStack *ls) {
    if (ls) {
        LinkStack *tmp = ls;
        ls = ls->next;
        printf("弹出元素%d\n", tmp->data);
        if (ls) {
            printf("现在栈顶的元素为:%d", ls->data);
        } else {
            printf("现在栈为空栈!\n");
        }
        free(tmp);
        tmp = NULL;
    } else {
        printf("现在栈为空栈!\n");
    }
    return ls;
}