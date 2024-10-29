
typedef struct node{
	int data;
	struct node *next;
}node;




typedef struct stack{
	int count;
	node *top;
}Stack;


Stack* createStack(Stack *stack);//count=0; top=NULL
Stack* push(Stack *stack, int num);
Stack* pop(Stack *stack);
void peek(Stack *stack);
