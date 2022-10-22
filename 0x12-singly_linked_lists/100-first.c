#include "lists.h"
/**
 * print_before_main - a function that prints
 * You're beat! and yet, you must allow,\nI bore my house upon my back!\n
 * before the main function is executed
 */
void print_before_main(void) __attribute__ ((constructor));
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house");
	printf(" upon my back!\n");
}
