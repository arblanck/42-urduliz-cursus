# 42-urduliz-cursus

This are the exercises of 42 Urduliz cursus.

Explicaciones de libft:


Functions from <ctype.h> 
 

ft_isalpha: int        ft_isalpha(int c) 

Description: Check for a alpabetic character [A(65) - Z(90) or a(97) - z(122)] 

Param. #1: The character to test 

Return Value: returns zero if the character tests false and returns non-zero if the character tests true 
  

ft_isdigit: int         ft_isdigit(int c) 

Description: Check for a decimal digit character [0(48) - 9(57)] 

Param. #1:The number to test 

Return Value: returns zero if the character tests false and returns non-zero if the character tests true 
  

ft_isalnum: int        ft_isalnum(int c) 

Description: Check for an alphanumeric character; it is equivalent to [ft_isalpha] or [ft_isdigit] 

Param. #1: The character to test 

Return Value: returns zero if the character tests false and returns non-zero if the character tests true 
 

ft_isprint: int        ft_isprint(int c) 

Description: Checks for any printable character [32 – 126] 

Param. #1: The character to test 

Return Value: returns zero if the character tests false and returns non-zero if the character tests true 
 

ft_isascii: int        ft_isascii(int c) 

Description: Checks for an ASCII character [0 – 127] 

Param. #1: The character to test 

Return Value: returns zero if the character tests false and returns non-zero if the character tests true 


ft_tolower: int        ft_tolower(int c) 

Description: Converts an upper-case letter to the corresponding lower-case letter (+32) 

Param. #1: The character to convert 

Return Value: Returns lowercase equivalent 
 

ft_toupper: int        ft_toupper(int c) 

Description: Converts a lower-case letter to the corresponding upper-case letter (-32) 

Param. #1: The character to convert 

Return Value: Returns uppercase equivalent  

 

Functions from <string.h> 

 
ft_strlen: size_t     ft_strlen(const char *str) 

Description: Computes the length of the string 

Param. #1: The string to calculate 

Return Values: The number of characters that precede the terminating NULL character  

 
ft_strlcpy: size_t     ft_strlcpy(char *dest, const char *strc, size_t size) 

Description: Copies up to size - 1 characters from the NULL-terminated string strc to dest, NUL-terminating the result 

Param. #1: Destination array  

Param. #2: String to be copied 

Param. #3:  Number of characters to be copied from strc 

Return Value: Total length of the string to create (length of strc) 

  
ft_strlcat: size_t     ft_strlcat(char *dest, const char *strc, size_t size) 

Description: Concatenate the string strc to the end of dest. It will concatenate at most size - strlen(dest) - 1 bytes, NULL-terminating the result 

Param. #1: Destination array 

Param. #2: String to be appended to dest 

Param. #3: Maximum number of characters to be appended 

Return Value: The initial length of dest plus the length of strc 

 
ft_strchr: char *ft_strchr(const char *str, int c) 

Description: Locates the first occurrence of c (converted to a char) in the string pointed to by str. The terminating null character is considered to be part of the string. 

Param. #1: Pointer to string 

Param. #2: Character to be located 

Return Value: Return a pointer to the located character, or NULL if the character does not appear in the string 

  
ft_strrchr: char *ft_strrchr(const char *str, int c) 

Description: Locates the last occurrence of c (converted to a char) in the string pointed to by str. The terminating null character is considered to be part of the string. 

Param. #1: Pointer to string 

Param. #2: Character to be located 

Return Value: Return a pointer to the located character, or NULL if the character does not appear in the string 


ft_strncmp: int *ft_strncmp(const char *s1, const char *s2, size_t size) 

Description: lexicographically compare the null-terminated strings s1 and s2, not more than size characters. Characters that appear after a `\0' character are not compared. 

Param. #1: String1 to be compared 

Param. #2: String2 to be compared 

Param. #3: Maximum number of characters to be compared 

Return Value: Return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. 

 
ft_strnstr: char       *ft_strnstr(const char *haystack, const char *needle, size_t size) 

Description: locates the first occurrence of the null-terminated string needle in the string haystack, where not more than size characters are searched. Characters that appear after a `\0' character are not searched.   

Param. #1: String to be scanned 

Param. #2: The small string to be searched in 'haystack' string 

Param. #3: The maximum amount of characters to be searched 

Return Value: A pointer to the first character of the first occurrence of little. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned 


ft_memset:  void       *ft_memset(void *str, int c, size_t size) 

Description: Fill with size bytes of c the memory of str 

Param. #1: The string on which to operate 

Param. #2: Value c (converted to an unsigned char) 

Param. #3: The number of bytes 

Return Value: A pointer to the memory area str 

 
ft_bzero: void       *ft_bzero(void *str,  size_t size) 

Description: Fill with size bytes of zero the memory of str 

Param. #1: The string on which to operate 

Param. #2: The number of bytes 

Return Value: None 

 
ft_memcpy: void       *ft_memcpy(void *dest, const void *strc, size_t size) 

Description: Copies size bytes from memory area strc to memory area of dest. If dest and strc overlap, behavior is undefined. 

Param. #1: Memory area dest 

Param. #2: Memory area src 

Param. #3: The number of bytes 

Return Value: A pointer to the memory area dest 


ft_memmove: void       *ft_memmove(void *dest, const void *strc, size_t size) 

Description: Copies size bytes from string strc to string dest. The two strings may overlap; the copy is always done in a non-destructive manner. 

Param. #1: Memory area dest 

Param. #2: Memory area strc 

Param. #3: The number of bytes 

Return Value: A pointer to the memory area dest 


ft_memchr: void       *ft_memchr(const void *str, int c, size_t size) 

Description: Scans the initial size bytes of string str for the first instance of c  

Param. #1: Memory area str 

Param. #2: A character to search 

Param. #3: The number of bytes 

Return Value: A pointer to the byte located, or NULL if no such byte exists within size bytes 


ft_memcmp: void       *ft_memcmp(const void *s1, const void *s2, size_t size) 

Description: compares byte string s1 against byte string s2.  Both strings are assumed to be size bytes long. 

Param. #1: Memory area s1 

Param. #2: Memory area s2 

Param. #3: The number of bytes 

Return Value:  Returns 0 if the two strings are identical, other-wise returns the difference between the first two differing bytes. Zero-length strings are always identical. 


ft_strdup: char       *ft_strdup(const char *str) 

Description: Allocates sufficient memory for a copy of the string str, does the copy, and returns a pointer to it. Memory for  the new string is obtained with malloc, and can be freed with free. 

Param. #1: The string to duplicate 

Return Values: A pointer to the duplicated string. NULL if insufficient memory was available. 



Functions from <stdlib.h> 

 
ft_atoi: int        ft_atoi(const char *str) 

Description: Converts the initial portion of the ASCII string pointed to by str to int : 

Param. #1: The string to be converted 

Return Value: The converted value 


ft_calloc: void       *ft_calloc(size_t number, size_t size) 

Description: Allocates enough space for count objects that are size bytes of memory each, and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero 

Param. #1: Number of elements to be allocated 

Param. #2: Size of elements 

Return Value: A pointer to the allocated memory, or NULL if the request fails 

 

Non-standard functions 

 
ft_substr: char *ft_substr(char const *s, unsigned int start, size_t len) 

Descripcion: Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’. 

Param. #1: La string desde la que crear la substring 

Param. #2: El índice del caracter en ’s’ desde el que empezar la substring 

Param. #3: La longitud máxima de la substring 

Valor devuelto: La substring resultante. NULL si falla la reserva de memoria.  

 
ft_strjoin: char *ft_strjoin(char const *s1, char const *s2)  

Descripcion: Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’. 

Param. #1: La primera string 

Param. #2: La string a añadir a ’s1’ 

Valor devuelto: La nueva string. NULL si falla la reserva de memoria. 

 
ft_strtrim: char *ft_strtrim(char const *s1, char const *set) 

Descripcion: Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3) 

Param. #1: La string que debe ser recortada 

Param. #2: Los caracteres a eliminar de la string 

Valor devuelto: La string recortada. NULL si falla la reserva de memoria. 
