#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Stack* createStack(Stack *stack){
  //count=0; top=NULL
  stack=(Stack*)malloc(sizeof(Stack));
  stack->count=0;
  stack->top=NULL;
  return stack;
}

Stack* push(Stack *stack, int num){
	node *newNode;
	newNode = (node*)malloc(sizeof(node));
	newNode->data = num;
	
	newNode->next = stack->top;
	stack->top=newNode;
	stack->count++;
	return stack;
}
void peek(Stack *stack){
	if(stack->count==0)
		printf("Stack is empty.\n");
	else
		printf("Top: %d\n",stack->top->data);
		
}
Stack* pop(Stack *stack){
	node *temp;
	if(stack->count==0)
		printf("Stack is empty.\n");
	else{
		temp=stack->top;
		stack->top=stack->top->next;
		stack->count--;
		printf("Popped: %d\n",temp->data);
		free(temp);
	}
	return stack;
}
