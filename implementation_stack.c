#include "stack.h"
#define MAX 100
#include <stdlib.h>
#include <stdio.h>

void initializeStack(Stack *stack) {
    if (stack == NULL) {
        return;
    }

    stack->data = (int*)calloc(MAX, sizeof(int));
    stack->top = 0;
}

int isStackFull(Stack* stack) {
    if (stack == NULL) {
        printf("Invalid Pointer \n");
        return -1;
    }
    if (stack->top == MAX) {
        return 1;
    }

    return 0;
}

int isStackEmpty(Stack* stack) {
     if (stack == NULL) {
        printf("Invalid Pointer \n");
        return -1;
    }
    if (!(stack->top - 1)) {
        return 1;
    }

    return 0;
}

void push(Stack *stack, int data) {
    if (stack == NULL) {
        printf("Invalid pointer \n");
        return;
    }
    if (stack->top == MAX) {
        printf("Stack overflow \n");
        return;
    }

    stack->data[stack->top] = data;
    stack->top += 1;

    return;
}

int pop(Stack* stack) {
    if (stack == NULL) {
        printf("Invalid pointer \n");
        return -1;
    }

    stack->top -= 1;

    return stack->data[stack->top];
}

int peek(Stack* stack) {
    if (stack == NULL) {
        printf("Invalid pointer \n");
        return -1;
    }
    if (stack->top == 0) {
        printf("Stack is empty \n");
        return -1;
    }

    return stack->top;
}

void displayStack(Stack* stack) {
    if (stack == NULL) {
        printf("Invalid pointer \n");
        return;
    }

    for (int i = stack->top - 1; i >= 0; --i) {
        printf("%d \n", pop(stack));
    }
    return;
}

void clearStack(Stack *stack) {
    if (stack == NULL) {
        printf("Invalid pointer");
        return;
    }
    if (stack->data == NULL) {
        return;
    }

    free(stack->data);
    stack->top = 0;

    return;
}
