# Libft
Libft is a C library containing various standard functions that are not included in the standard C library. The goal of this project is to create a foundation for future projects at 42.

List of Functions
Here is a list of functions implemented in this library:

ft_atoi  
ft_bzero  
ft_calloc  
ft_isalnum  
ft_isalpha  
ft_isascii  
ft_isdigit  
ft_isprint  
ft_itoa  
ft_memchr  
ft_memcmp  
ft_memcpy  
ft_memmove  
ft_memset  
ft_putchar_fd  
ft_putendl_fd  
ft_putnbr_fd  
ft_putstr_fd  
ft_split  
ft_strchr  
ft_strdup  
ft_strjoin  
ft_strlcat  
ft_strlcpy  
ft_strlen  
ft_strmapi  
ft_strncmp  
ft_strnstr  
ft_strrchr  
ft_strtrim  
ft_substr  
ft_tolower  
ft_toupper  
ft_lstadd_back_bonus.c  
ft_lstclear_bonus.c  
ft_lstiter_bonus.c  
ft_lstmap_bonus.c  
ft_lstsize_bonus.c  
ft_lstadd_front_bonus.c  
ft_lstdelone_bonus.c  
ft_lstlast_bonus.c  
ft_lstnew_bonus.c  

This library also includes bonus functions that are part of the 42 "libft" project.

<h3>ft_atoi:</h3>

The ft_atoi function is a custom implementation of a common operation in C, known as "string to integer" conversion. This function takes a string as input and converts it into an integer value. Here's a simplified explanation of how it works:

**Ignoring Whitespace:** The function starts by skipping any leading spaces, tabs, newlines, and other whitespace characters in the input string.

**Handling Sign:** It handles optional sign characters ('+' or '-') that indicate whether the number is positive or negative. If a '-' sign is encountered, the sign variable is set to -1.

**Processing Digits:** The function then processes the digits in the string. It converts each digit to its corresponding integer value by subtracting the character '0'. The accumulated value is constructed by multiplying the existing value by 10 and adding the current digit value.

**Integer Overflow Check:** The function has a counter cpt that keeps track of the number of processed digits. It also checks if the value is within a safe range. If the value goes beyond the representable range of an integer (overflow), it uses a helper function called max_size to handle this scenario.

**Returning the Result:** Finally, the function returns the computed integer value, taking into account the sign. If the value exceeds the range of an integer, the max_size function is used to return a specific value that indicates overflow or underflow.

Overall, the ft_atoi function is a robust and versatile tool for converting strings representing numbers into their corresponding integer values, handling various edge cases to ensure reliable results.
