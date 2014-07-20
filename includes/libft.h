/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 10:51:44 by fgundlac          #+#    #+#             */
/*   Updated: 2014/07/20 19:18:48 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdarg.h>

#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strchr(const char *src, int c);
char	*ft_strrchr(const char *src, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *str);
void	ft_striter(char *str, void (*f)(char *));
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *str, char (*f)(char));
char	*ft_strmpi(char const *str, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t size);
char	*ft_strtrim(char const *str);
char	*ft_strsub(char const *str, unsigned int start, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_strsplit(char const *str, char c);
void	ft_putchar(char c);
void	ft_putstr(char const *str);
void	ft_putendl(char *str);
void	ft_putnbr(int nbr);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl_fd(char const *str, int fd);
void	ft_putnbr_fd(int nbr, int fd);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
char	*char_to_str(char c);
char	*ft_strrev(char *str);
size_t	get_int_len(int n);
char	*ft_bitoa(unsigned int n, int base);
char	*integer(va_list ap);
char	*uiteger(va_list ap);
char	*octal(va_list ap);
char	*caracter(va_list ap);
char	*string(va_list ap);
char	*ft_fgets();
int		ft_tablen(char **tab);
int		ft_intab(char **tab, char *str);
char	*ft_cacat(int nb, ...);
char	**ft_str_uniq(char **tab);
void	ft_puttab(char **tab);
char	**ft_add_tab(char **tab, char *str);
void	ft_free_tab(char **tab);

# define ENDL			ft_strnstr(buf + val.j, "\n", val.ret - val.j)
# define BUFF_SIZE		4096

typedef struct			s_jret
{
	int					j;
	int					ret;
}						t_jret;

int			get_next_line(int const fd, char **line);

typedef struct		s_List
{
	void			*content;
	int				size;
	struct s_List	*next;
}					t_List;

t_List			*ft_lstnew(void *content, int size);
void			ft_lstadd_front(t_List **lst, t_List *new);
void			ft_lstadd_back(t_List **lst, t_List *new);
void			ft_lstfree(t_List *lst);
t_List			*ft_lst_remove(t_List *lst,
					int (*comp_fun)(void *, void *), void *const b);
int				ft_in_lst(t_List *lst,
					int (*fun_comp)(void *, void *), void *const b);



#endif
