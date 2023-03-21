#include "hdump.h"
#include "logging.h"
#include "options.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char *av[])
{
	t_dump_params 	params;
	char			*ptr;
	int             ret;

	LOG(WARNING, "Debug mode is enabled");
	
	memset(&params, 0, sizeof(params));
	while ((ptr = get_next_argument(&ac, &av))) {
		if (!parse_single_option(ptr, &params, &ac, &av))
			return (EXIT_FAILURE);
	}
	if (!params.file.filename)
		return (usage(), EXIT_SUCCESS);
	ret = !_entry_(&params);
	if (params.file.fd)
		close(params.file.fd);
	return (ret);
}
