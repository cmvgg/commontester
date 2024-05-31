#include "ft_printf.h"


int main(int argv, char **argc)
{
	(void) argv;

	const char *format = argc[1];
	char *arg = argc[2];
	int num = 0;

	if (format[1] == 'c')
		ft_printf("%c", argc[2]);
	if (format[1] == '%')
		ft_printf("%%");
	if (format[1] == 's')
		ft_printf("%s", argc[2]);
	if ((format[1] == 'i'))
		{
			num = atoi(argc[2]); 
			ft_printf("%i", num);
		}
	if (format[1] == 'd')
		{
			num = atoi(argc[2]); 
			ft_printf("%d", num);
		}
	if (format[1] == 'u')
		{
			num = atoi(argc[2]); 
			ft_printf("%u", num);
		}
	if (format[1] == 'x')
		{
			num = atoi(argc[2]); 
			ft_printf("%x", num);
		}
	if (format[1] == 'X')
		{
			num = atoi(argc[2]); 
			ft_printf("%X", num);
		}
	if (format[1] == 'p')
		ft_printf("%p", arg);
}