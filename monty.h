#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct stack_a - struct needed
 * @line: line
 * @global_number: number
 * @fp: file descriptor
 * @head: pointer to structure initial
 * @newnode: pointer to structure end
 *
 * Description: struct to free
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_a
{
	char *line;
	int global_number;
	FILE *fp;
	stack_t *head;
	stack_t *newnode;
} global_stack;

extern global_stack global;

int main(int argc, char *argv[]);
int get_arg(char *argv[]);
int exe(char *op, stack_t **stack, unsigned int line_number);
void push(stack_t **head, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
int check_digit(char *tokens, unsigned int line_number);
int check_digit_push(char *tokens, unsigned int line_number);
void get_buffer(char *string, char **my_tokens);
void free_stack_t(stack_t *head);
void pint(stack_t **head, unsigned int line_number);
void pop(stack_t **head, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void f_div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
#endif /* _MONTY_H_ */
