#include <libft.h>
#include <stdio.h>

#include <stdarg.h>

typedef struct s_opp
{
	char		*op;
	void		(*f)();
}			t_opp;

void			ft_put_int(va_list *ap)
{
	int		nb;

	nb = va_arg(*ap, int);
	ft_putnbr(nb);
}

t_opp			gl_opptab[] =
{
	{"d", &ft_putnbr},
};

void			ft_printf(char *format, ...)
{
	va_list		ap;
	int		var;
	int		i = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			gl_opptab[0].f(ap);
		}
		i++;
	}
}

int				main(void)
{
	ft_printf("% %", 10, 20);
	return (0);
}
