
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!*str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 31) && (str [i] < 127))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
