#include <libft.h>
#include <stdio.h>

#include <stdarg.h>

#define INTEGER int

typedef struct s_opp
{
	char		*op;
	char		*type;
	void		(*f)();
}				t_opp;

t_opp			gl_opptab[] =
{
	{"d", "INTEGER", &ft_putnbr},
};

void				ft_printf(char *format, ...)
{
	va_list			ap;
	int				var;
	int				i = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			var = va_arg(ap, gl_opptab[0].type);
			gl_opptab[0].f(var);
		}
		i++;
	}
}

int				main(void)
{
	ft_printf("%% ", 10, 10);
	return (0);
}
