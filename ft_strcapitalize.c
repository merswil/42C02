
int	is_apha_num(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!is_apha_num(str[i]))
		{
			i++;
		}
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
		while (is_apha_num(str[i]))
		{
			if ((str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] = str[i] + 32;
			}
			i++;
		}
	}
	return (str);
}

#include<stdio.h>

int main() 
  {
	char A[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(A));

	return 0;
 }
