/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:16:59 by sbartoul          #+#    #+#             */
/*   Updated: 2023/12/28 22:23:19 by sbartoul         ###   ########.fr       */
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
}							t_list;

void						ft_bzero(void *dst, size_t n);
void						ft_putchar_fd(char c, int fd);
void						ft_putstr_fd(char *s, int fd);
void						ft_putendl_fd(char *s, int fd);
void						ft_putnbr_fd(int n, int fd);

void						ft_striteri(char *s, void (*f)
								(unsigned int, char*));

void						*ft_memset(void *string, int c, size_t len);
void						*ft_memcpy(void *dest, const void *src, size_t n);
void						*ft_memmove(void *dest, const void *src,
								size_t len);
void						*ft_memchr(const void *str, int c, size_t n);
void						*ft_calloc(size_t num, size_t size);

int							ft_memcmp(const void *str1, const void *str2,
								size_t n);
int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isalnum(int c);
int							ft_isascii(int c);
int							ft_isprint(int c);
int							ft_toupper(int c);
int							ft_tolower(int c);
int							ft_strncmp(const char *s1, const char *s2,
								size_t n);
int							ft_atoi(const char *str);

size_t						ft_strlen(const char *str);
size_t						ft_strlcpy(char *dest, const char *src, size_t len);
size_t						ft_strlcat(char *dest, const char *src, size_t len);

char						*ft_strchr(const char *str, int c);
char						*ft_strrchr(const char *str, int c);
char						*ft_strnstr(const char *dest, const char *src,
								size_t n);
char						*ft_strdup(const char *str);
char						*ft_substr(char const *s, unsigned int start,
								size_t len);
char						*ft_strjoin(char const *s1, char const *s2);
char						*ft_strtrim(char const *s1, char const *set);
char						*ft_itoa(int n);
char						*ft_strmapi(char const *s, char (*f)
								(unsigned int, char));

char						**ft_split(char const *s, char c);

t_list						*ft_lstnew(void *content);
t_list						*ft_lstlast(t_list *lst);
t_list						*ft_lstmap(t_list *lst, void *(*f)(void *),
								void (*del)(void *));

void						ft_lstadd_front(t_list **lst, t_list *new_lst);
void						ft_lstadd_back(t_list **lst, t_list *new_lst);
void						ft_lstdelone(t_list *lst, void (*del)(void*));
void						ft_lstclear(t_list **lst, void (*del)(void*));
void						ft_lstiter(t_list *lst, void (*f)(void *));
int							ft_lstsize(t_list *lst);

#endif
