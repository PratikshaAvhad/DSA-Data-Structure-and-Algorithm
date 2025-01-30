#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
typedef struct stack
{
 char data;
 struct stack *next;
} STACK;
int isEmpty(STACK *s)
{
 return (s == NULL) ? 1 : 0;
}
STACK *push(STACK *s, char n)
{
 STACK *new_node, *temp;
 new_node = (STACK *)malloc(sizeof(STACK));
 new_node->next = NULL;
 new_node->data = n;
 new_node->next = s;
 s = new_node;
 return s;
}
STACK *pop(STACK *s)
{
 char n;
 STACK *temp = s;
 n = temp->data;
 s = temp->next;
 free(temp);
 printf("%c", n);
 return s;
}
int main()
{
 STACK *s = NULL, *temp;
 char input[max], ch;
 int i;
 printf("\nEnter Sentence:\n");
 gets(input);
 for (i = 0; i < strlen(input); i++)
 {
 if (input[i] != ' ')
 {
 s = push(s, input[i]);
 }
 else
 {
 while (!isEmpty(s))
 {
 s = pop(s);
 }
 printf(" ");
 }
 }
 while (!isEmpty(s))
 {
 s = pop(s);
 }
 getch();
 return 0;
}
//static implementaion...
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define max 100
typedef struct stack
{
 int top;
 char item[max];
}STACK;
void initStack(STACK *ps)
{
 ps->top = -1;
}
int isEmpty(STACK *ps)
{
 if (ps->top == -1)
 {
 return 1;
 }
 else
 {
 return 0;
 }
}
int isFull(STACK *ps)
{
 if (ps->top == max - 1)
 {
 return 1;
 }
 else
 {
 return 0;
 }
}
void push(STACK *ps, char n)
{
 if (!isFull(ps))
 {
 ps->top++;
 ps->item[ps->top] = n;
 }
 else
 {
 printf("\n Stack is full...!");
 }
}
char pop(STACK *ps)
{
 char x;
 if (!isEmpty(ps))
 {
 x = ps->item[ps->top];
 ps->top--;
 }
 else
 {
 printf("\n Stack is empty!");
 }
 return x;
}
int main()
{
 int len = 0, i;
 STACK s1;
 char input[max];
 initStack(&s1);
 printf("\n Enter sentence:");
 gets(input);
 for (i = 0; i < strlen(input); i++)
 {
 if (input[i] != ' ')
 {
 push(&s1, input[i]);
 }
 else
 {
 while (!isEmpty(&s1))
 {
 printf("%c", pop(&s1));
 }
 printf(" ");
 }
 }
 while (!isEmpty(&s1))
 {
 printf("%c", pop(&s1));
 }
 getch();
 return 0;
}

