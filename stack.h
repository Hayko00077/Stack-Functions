#ifndef STACK_H
#define STACK_H
// Stack  ure
#define MAX 100  
typedef struct {
    int *data;
    int top;
} Stack;

// Function prototypes for Stack
void initializeStack(  Stack* stack);
int isStackFull(Stack* stack);
int isStackEmpty(Stack* stack);
void push(Stack* stack, int data);
int pop(Stack* stack);
int peek(Stack* stack);
void displayStack(Stack* stack);
void clearStack(Stack *stack);
#endif
