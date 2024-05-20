
char *strrchr(const char *s, int c)
{
	const char *str = 0;

	while (*s)
	{
		if(*s == c)
			str = s;;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	return (char *)str;
}
