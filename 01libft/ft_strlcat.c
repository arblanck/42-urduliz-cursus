size_t	ft_strlcat (char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	i;

	destlen = ft_strlen(dest);	
	if (size <= destlen) //duda: que significa esto?
		return (size + destlen);
	i = 0;
	while (src[i] != '\0' && destlen + 1 < size) //duda: la segunda condicion porque es asi en vez de destlen < size - 1 ?
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i])); // duda: esto porque va asi?
}
