#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 10
typedef struct Stack{
    int data[SIZE];
    int top;
}Stack;
void push(Stack*s,int data)
{
    if(s->top==SIZE-1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    s->data[++(s->top)]=data;
}
char pop(Stack*s)
{
    if(s->top==-1)
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->data[s->top--];
}
char peek(Stack *s) {
    if (s->top == -1)
        return '\0';
    return s->data[s->top];
}
int priority(char a)
{
    if(a=='*'||a=='/')  return 2;
    if(a=='+'||a=='-')  return 1;
    return 0;
}
void inToPost(Stack *s,char * exp)
{
    char post[100];
    int i,k;
    i=k=0;
    char ch;
    while((ch=exp[i++])!='\0')
    {
        if(isspace(ch)) continue;
        if(isalnum(ch)){
            post[k++]=ch;
        }else if(ch=='('){
            push(s,ch);
        }else if(ch==')'){
            while (s->top != -1 && peek(s) != '(')
                post[k++] = pop(s);
            if (s->top != -1 && peek(s) == '(')
                pop(s); 
            else
                printf("Error: Mismatched parentheses!\n");
        }
        else {
            while (priority(peek(s)) >= priority(ch) && peek(s) != '(')
                post[k++] = pop(s);
            push(s, ch);
        }
    }
    while (s->top != -1)
        post[k++] = pop(s);
    post[k] = '\0';
    printf("Postfix: %s\n", post);
}
int main() {
    Stack s;
    s.top = -1;
    char exp[SIZE];

    printf("Enter infix expression: ");
    scanf("%s", exp);

    inToPost(&s, exp);

    return 0;
}