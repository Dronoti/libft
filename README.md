# Проект "Libft"
![Vim](https://img.shields.io/badge/VIM-%2311AB00.svg?style=for-the-badge&logo=vim&logoColor=white)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Mac OS](https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=macos&logoColor=F0F0F0)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)

### Описание проекта
Основная задача данного проекта - это воссоздание некоторых основополагающих функций [стандартной библиотеки С](https://en.wikipedia.org/wiki/C_standard_library) для дальнейшего использования их в собственных проектах.
В свою очередь, целью этого является изучение структур данных, основных алгоритмов, а также более глубокое понимание как работают стандартные функции библиотеки С.

### Список доступных функций
* [`ft_atoi`](./ft_atoi.c) - convert ASCII string to integer.
* [`ft_bzero`](./ft_bzero.c) - write zeroes to a byte string.
* [`ft_isalnum`](./ft_isalnum.c) - alphanumeric character test.
* [`ft_isalpha`](./ft_isalpha.c) - alphabetic character test.
* [`ft_isascii`](./ft_isascii.c) - test for ASCII character.
* [`ft_isdigit`](./ft_isdigit.c) - decimal-digit character test.
* [`ft_isprint`](./ft_isprint.c) - printing character test (space character inclusive).
* [`ft_itoa`](./ft_itoa.c) - convert integer to ASCII string.
* [`ft_lstadd_back`](./ft_lstadd_back.c) - add new element at end of list.
* [`ft_lstadd_front`](./ft_lstadd_front.c) - add new element at beginning of list.
* [`ft_lstclear`](./ft_lstclear.c) - delete sequence of elements of list from a starting point.
* [`ft_lstdelone`](./ft_lstdelone.c)- delete element from list.
* [`ft_lstiter`](./ft_lstiter.c)- apply function to content of all list's elements.
* [`ft_lstlast`](./ft_lstlast.c) - find last element of list.
* [`ft_lstmap`](./ft_lstmap.c) - apply function to content of all list's elements into new list.
* [`ft_lstnew`](./ft_lstnew.c) - create new list.
* [`ft_lstsize`](./ft_lstsize.c) - count elements of a list.
* [`ft_memccpy`](./ft_memccpy.c) - copy string until character found.
* [`ft_memchr`](./ft_memchr.c) - locate byte in byte string.
* [`ft_memcmp`](./ft_memcmp.c) - compare byte string.
* [`ft_memcpy`](./ft_memcpy.c)- copy memory area.
* [`ft_memmove`](./ft_memmove.c)- copy byte string.
* [`ft_memset`](./ft_memset.c) - write a byte to a byte string.
* [`ft_putchar_fd`](./ft_putchar_fd.c) - output a character to given file.
* [`ft_putendl_fd`](./ft_putendl_fd.c) - output string to given file with newline.
* [`ft_putnbr_fd`](./ft_putnbr_fd.c) - output integer to given file.
* [`ft_putstr_fd`](./ft_putstr_fd.c) - output string to given file.
* [`ft_split`](./ft_split.c) - split string, with specified character as delimiter, into an array of strings.
* [`ft_strchr`](./ft_strchr.c) - locate character in string (first occurrence).
* [`ft_strdup`](./ft_strdup.c) - save a copy of a string (with malloc).
* [`ft_strjoin`](./ft_strjoin.c) - concatenate two strings into a new string (with malloc).
* [`ft_strlcat`](./ft_strlcat.c) - size-bounded string concatenation.
* [`ft_strlcpy`](./ft_strlcpy.c) - size-bounded string copying.
* [`ft_strlen`](./ft_strlen.c) - find length of string.
* [`ft_strmapi`](./ft_strmapi.c) - create new string from modifying string with specified function.
* [`ft_strncmp`](./ft_strncmp.c) - compare strings (size-bounded).
* [`ft_strnstr`](./ft_strnstr.c) - locate a substring in a string (size-bounded).
* [`ft_strrchr`](./ft_strrchr.c) - locate character in string (last occurence).
* [`ft_strtrim`](./ft_strtrim.c) - trim beginning and end of string with the specified characters.
* [`ft_substr`](./ft_substr.c) - extract substring from string.
* [`ft_tolower`](./ft_tolower.c) - upper case to lower case letter conversion.
* [`ft_toupper`](./ft_toupper.c) - lower case to upper case letter conversion.

### Использование
**1. Клонирование и компиляция библиотеки**
```bash
git clone https://github.com/Dronoti/libft.git libft && cd libft && make && make clean
```
**2. Использование в коде**

Для использования функций библиотеки в коде необходимо подключить заголовочный файл
```C
#include "libft.h"
```
и добавить библиотеку при компиляции проекта
```bash
path/to/libft.a -I path/to/libft.h
```

### Дополнительно
Подробное описание функций библиотеки, ограничения и требования к ее реализации описаны в [задании.](./libft.pdf)
