int	ft_len(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	c = c % 256; 
	i = ft_len(s);
	while (i >= 0 && s[i] != c)
		i--;
	if (i < 0)
		return (0);
	return ((char *)s + i);
}

