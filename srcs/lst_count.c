#include <libft.h>
#include <stddef.h>

unsigned int					lst_count(t_list *lst)
{
	t_list						*lstwalker;
	unsigned int				ret;

	ret = 0;
	lstwalker = lst;
	while (lstwalker != NULL)
	{
		if (lstwalker->next == NULL)
			break ;
		lstwalker = lstwalker->next;
		++ret;
	}
	return (ret);
}
