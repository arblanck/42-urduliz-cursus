size_t	ft_strlcpy (char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;

	if (!dest || !src) //duda: que significa esto?
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1)) //duda: en los ejemplos pone 0 en vez de '\0'
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}
