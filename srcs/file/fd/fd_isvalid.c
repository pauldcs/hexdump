#include <fcntl.h>

int fd_isvalid (int fd)
{
	return (fcntl (fd, F_GETFD, 0) >= 0);
}
