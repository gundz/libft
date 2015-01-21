#include <libft.h>
#include <stdio.h>

#include <stdarg.h>

typedef struct s_func
{
	char		*fl;
	void		(*f)();
}				t_func;

static void			put_int(va_list *ap)
{
	int			nb;

	nb = va_arg(*ap, int);
	ft_putnbr(nb);
}

static void			put_str(va_list *ap)
{
	char			*str;

	str = va_arg(*ap, char *);
	ft_putstr(str);
}

static void			put_char(va_list *ap)
{
	char			c;

	c = va_arg(*ap, int);
	ft_putchar(c);
}

t_func				gl_functab[] =
{
	{"d", &put_int},
	{"s", &put_str},
	{"c", &put_char},
};

int				find_func(char *format, int *len)
{
	int			i;
	int			j;

	i = 0;
	while (gl_functab[i].fl != '\0')
	{
		j = 0;
		while (gl_functab[i].fl[j] == format[j] && format[j] != '\0')
		{
			if (gl_functab[i].fl[j] == '\0')
			{
				*len = j;
				return (i);
			}
			j++;
		}
		if (gl_functab[i].fl[j] == '\0')
		{
			*len = j;
			return (i);
		}
		i++;
	}
	return (-1);
}

void			ft_printf(char *format, ...)
{
	va_list		ap;
	int			i = 0;
	int			tmp;
	int			ret;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if ((ret = find_func(format + 1 + i, &tmp)) >= 0)
			{
				gl_functab[ret].f(ap);
				i += tmp;
			}
			else
				ft_putchar(format[i]);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
}

int				main(void)
{
	printf("%%%d\n", 12);
	ft_printf("%%%d\n", 12);
	return (0);
}
