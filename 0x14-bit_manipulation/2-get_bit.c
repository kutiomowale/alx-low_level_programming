/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the bit
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (n != 0 && n != 1)
	{
		if (((n >> 1) << 1) == n)
		{
			if (i == index)
				return (0);
		}
		else
		{
			if (i == index)
				return (1);
		}
		i++;
		n = n >> 1;
	}
	if (i == index)
		return (n);
	else
		return (-1);
}
