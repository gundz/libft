#ifndef		LST_H
# define	LST_H

typedef struct				s_list
{
	struct s_list			*next;
	void					*data;
}							t_list;

t_list						*lst_create_elem(void *data);
void						lst_push_back(t_list **lst, void *data);
void						lst_sort(t_list **lst, int (*cmp)(), const int rev);
unsigned int				lst_count(t_list *lst);

#endif
