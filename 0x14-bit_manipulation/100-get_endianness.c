int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	if (*y + 48 == '1')
		return (1);
	return (0);
}
