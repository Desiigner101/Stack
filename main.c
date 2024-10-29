#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Stack *stack=createStack(stack);
	int choice,num;
	
	do{
		printf("\n\n1- Push\n");
		printf("2- Pop\n");
		printf("3- Peek\n");
		printf("4- Exit\n");
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Input a number: ");
					scanf("%d",&num);
					stack = push(stack,num);
					break;
			case 2:	stack=pop(stack);
					break;
			case 3: peek(stack);
					break;
		}
	}while(choice!=4);
	
	
	return 0;
}
