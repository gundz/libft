#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

# define BUF_SIZE 4096

# include <unistd.h>

int			get_next_line(int fd, char **buf);

#endif