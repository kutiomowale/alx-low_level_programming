#include "main.h"

/**
 * jack_bauer1 - prints 00:00 to 19:59 minutes
 */

void jack_bauer1(void)
{
	char hl, hr, ml, mr;

	hl = '0';
	while (hl <= '1')
	{
		hr = '0';
		while (hr <= '9')
		{
			ml = '0';
			while (ml <= '5')
			{
				mr = '0';
				while (mr <= '9')
				{
					_putchar(hl);
					_putchar(hr);
					_putchar(':');
					_putchar(ml);
					_putchar(mr);
					_putchar('\n');
					mr++;
				}
				ml++;
			}
			hr++;
		}
		hl++;
	}
}


/**
 * jack_bauer2 - print from 20:00 to 23:59
 */

void jack_bauer2(void)
{
	char hl, hr, ml, mr;

	hl = '2';
	while (hl <= '2')
	{
		hr = '0';
		while (hr <= '3')
		{
			ml = '0';
			while (ml <= '5')
			{
				mr = '0';
				while (mr <= '9')
				{
					_putchar(hl);
					_putchar(hr);
					_putchar(':');
					_putchar(ml);
					_putchar(mr);
					_putchar('\n');
					mr++;
				}
				ml++;
			}
			hr++;
		}
		hl++;
	}
}

/**
 * jack_bauer - prints 00:00 to 23:59 minutes
 */

void jack_bauer(void)
{
	jack_bauer1();
	jack_bauer2();
}
