/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int j, k, l;

	int temp[1000];

	j = 0;
	k = n - 1;
	while (j < n)
	{
		temp[j] = a[k];
		j++;
		k--;
	}

	l = 0;
	while (l < n)
	{
		a[l] = temp[l];
		l++;
	}
}
