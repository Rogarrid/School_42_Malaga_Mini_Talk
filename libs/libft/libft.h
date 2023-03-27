/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:32:58 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 15:52:47 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *directation_memory, size_t number_bytes);
void	*ft_calloc(size_t number_items, size_t size);
int		ft_isalnum(int character);
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
char	*ft_itoa(int number);
void	*ft_memchr(const void *string, int character, size_t number_bytes);
int		ft_memcmp(const void *string1, const void *string2, size_t numb_bytes);
void	*ft_memcpy(void *destination, const void *source, size_t number_bytes);
void	*ft_memmove(void *destination, const void *source, size_t length);
void	*ft_memset(void *string, int character, size_t number_bytes);
void	ft_putchar_fd(char character, int file_descriptor);
void	ft_putendl_fd(char *string, int file_descriptor);
void	ft_putnbr_fd(int number, int file_descriptor);
void	ft_putstr_fd(char *string, int file_descriptor);
char	**ft_split(char const *str, char cha);
char	*ft_strchr(const char *string, int character);
char	*ft_strdup(const char *string);
void	ft_striteri(char *string, void (*function)(unsigned int, char*));
char	*ft_strjoin(char const *string_1, char const *string_2);
size_t	ft_strlcat(char *destination, const char *source, size_t size_dest);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlen(const char *string);
char	*ft_strmapi(char const *string, char (*function)(unsigned int, char));
int		ft_strncmp(const char *string1, const char *string2, size_t numb_bytes);
char	*ft_strnstr(const char *str_big, const char *str_little, size_t length);
char	*ft_strrchr(const char *string, int character);
char	*ft_strtrim(char const *string_1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int character);
int		ft_toupper(int character);
t_list	*ft_lstnew(void	*content);
void	ft_lstadd_front(t_list **list, t_list *new);
int		ft_lstsize(t_list *list);
t_list	*ft_lstlast(t_list *list);
void	ft_lstadd_back(t_list **list, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
