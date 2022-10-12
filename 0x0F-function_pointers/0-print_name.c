/**
 * print_name - a function that prints a name
 * @name: pointer to the name to print
 * @f: pointer to a funtion that does the actual printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name)
	{
		f(name);
	}
}
