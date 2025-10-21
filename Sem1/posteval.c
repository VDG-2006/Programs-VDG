#include <stdio.h>
#include <ctype.h>
#define MAXSTACK 100 /* for max size of stack */
#define POSTFIXSIZE 100 /* define max number of charcters in postfix expression */
/* declare stack and its top pointer to be used during postfix expression evaluation*/
int stack[MAXSTACK];
int top = -1; /* because array index in C begins at 0 */
void push(int item)
{


top = top + 1;
 stack[top] = item;

}
/* define pop operation */
 int pop()
{
int item;

item = stack[top]; 
top = top - 1;
 return item;

}
/* define function that is used to input postfix expression and to evaluate it */ 
void EvalPostfix(char postfix[])
{

int i; char ch; int val; int A, B;

/* evaluate postfix expression */ 
for (i = 0; postfix[i] != '\0'; i++) {
ch = postfix[i]; 
if (isdigit(ch)) {
/* we saw an operand,push the digit onto stack
ch - '0' is used for getting digit rather than ASCII code of digit */
push(ch - '0');
}
else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
/* we saw an operator
*	pop top element A and next-to-top elemnet B
*	from stack and compute B operator A
*/
A = pop();
B = pop();

switch (ch) /* ch is an operator */
{
case '*':
val = B * A; break;

case '/':
val = B / A; break;

case '+':
val = B + A; break;

case '-':
val = B - A; break;
 
}

/* push the value obtained above onto the stack */ push(val);
}
}
printf(" \n Result of expression evaluation : %d \n", pop());
}


int main()
{

 char postfix[POSTFIXSIZE];
printf("ASSUMPTION: There are only four operators(*, /, +, -) in an expression and operand is single digit only.\n");


scanf("%s",postfix);

/* call function to evaluate postfix expression */

EvalPostfix(postfix);

return 0;
}
