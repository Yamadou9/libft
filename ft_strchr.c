char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	c = c % 256;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (0);
}
