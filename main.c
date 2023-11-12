#include "include/libft.h"
#include "include/ft_printf.h"

int	main(int argc, char **argv)
{
	if (argc < 0)
		return (0);
	ft_printf("%s\n", argv[1]);
	return (0);
}
