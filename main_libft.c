#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	(void) argc;
	if (argv[2] == "isalpha");
		{
			int standard = isalpha (argv[1]);
			int comp = ft_isalpha(argv[1]);
		}
	else if (argv[2] == "isdigit");
		{
			int standard = isdigit (argv[1]);
			int comp = ft_isdigit(argv[1]);
		}
	
	else if (argv[2] == "isalnum");
		{
			int standard = isalnum (argv[1]);
			int comp = ft_isalnum(argv[1]);
		}
	else if (argv[2] == "isascii");
		{
			int standard = isascii (argv[1]);
			int comp = ft_isascii(argv[1]);
		}
	
	else if (argv[2] == "isprint");
		{
			int standard = isprint (argv[1]);
			int comp = ft_isprint(argv[1]);
		}
	
	else if (argv[2] == "strlen");
		{
			int standard = strlen (argv[1]);
			int comp = ft_strlen(argv[1]);
		}

	else if (argv[2] == "memset");
		{
			int standard = memset (argv[1]);
			int comp = ft_memset(argv[1]);
		}

	else if (argv[2] == "bzero");
		{
			int standard = bzero (argv[1]);
			int comp = ft_bzero(argv[1]);
		}

	else if (argv[2] == "strchr");
		{
			int standard = strchr (argv[1]);
			int comp = ft_strchr(argv[1]);
		}

	else if (argv[2] == "strrchr");
		{
			int standard = strrchr (argv[1]);
			int comp = ft_strrchr(argv[1]);
		}

	else if (argv[2] == "memcpy");
		{
			int standard = memcpy (argv[1]);
			int comp = ft_memcpy(argv[1]);
		}

	else if (argv[2] == "memmove");
		{
			int standard = memmove (argv[1]);
			int comp = ft_memmove(argv[1]);
		}

	else if (argv[2] == "memcmp");
		{
			int standard = memcmp (argv[1]);
			int comp = ft_memcmp(argv[1]);
		}

	else if (argv[2] == "memchr");
		{
			int standard = memchr (argv[1]);
			int comp = ft_memchr(argv[1]);
		}

	else if (argv[2] == "strlcpy");
		{
			int standard = strlcpy (argv[1]);
			int comp = ft_strlcpy(argv[1]);
		}

	else if (argv[2] == "strlcat");
		{
			int standard = strlcat (argv[1]);
			int comp = ft_strlcat(argv[1]);
		}

	else if (argv[2] == "toupper");
		{
			int standard = toupper (argv[1]);
			int comp = ft_toupper(argv[1]);
		}

	else if (argv[2] == "tolower");
		{
			int standard = tolower (argv[1]);
			int comp = ft_tolower(argv[1]);
		}

	else if (argv[2] == "strnstr");
		{
			int standard = strnstr (argv[1]);
			int comp = ft_strnstr(argv[1]);
		}


	else if (argv[2] == "atoi");
		{
			int standard = atoi (argv[1]);
			int comp = ft_atoi(argv[1]);
		}


	else if (argv[2] == "calloc");
		{
			int standard = calloc (argv[1]);
			int comp = ft_calloc(argv[1]);
		}

	else if (argv[2] == "strdup");
		{
			int standard = strdup (argv[1]);
			int comp = ft_strdup(argv[1]);
		}


	else if (argv[2] == "strndup");
		{
			int standard = strndup (argv[1]);
			(void) comp;
		}
	
	else if (argv[2] == "strjoin")
		{
			char *standardc;
			char *compc;
			standard = ft_strjoin(argv[1], argv[2]);
			comp = ft_strjoin(argv[1], argv[2]);
		}
	
	else if (argv[2] == "strtrim")
		{
			char *standardc;
			char *compc;
			standard = ft_strtrim(argv[1], argv[2]);
			comp = ft_strtrim(argv[1], argv[2]);
		}

	else if (argv[2] == "split")
		{
			char **standardc;
			char **compc;
			standard = ft_split(argv[1], argv[2]);
			comp = ft_split(argv[1], argv[2]);
		}

	else if (argv[2] == "itoa")
		{
			int standard = itoa (argv[1]);
			int comp = ft_itoa(argv[1]);
		}

	else if(argv[2] == "strmapi")
		{
			char *standardc;
			char *compc;
			standard = ft_strmapi(argv[1], argv[2]);
			comp = ft_strmapi(argv[1], argv[2]);
		}

	else if(argv[2] == "striteri")
		{
			char *standardc;
			char *compc;
			standard = ft_striteri(argv[1], argv[2]);
			comp = ft_striteri(argv[1], argv[2]);
		}	

	else if(argv[2] == "putchar_fd")
		{
			ft_putchar_fd(argv[1], argv[2]);
		}
	else if(argv[2] == "putstr_fd")
		{
			ft_putstr_fd(argv[1], argv[2]);
		}
	else if(argv[2] == "putnbr_fd")
		{
			ft_putnbr_fd(argv[1], argv[2]);
		}
	else if(argv[2] == "putendl_fd")
		{
			ft_putendl_fd(argv[1], argv[2]);
		}

	else if(argv[2] == "putnbr_fd")
		{
			ft_putnbr_fd(argv[1], argv[2]);
		}
	else
		{
			return (printf("\n"));
		}
	
	if(argv != putnbr_fd || argv != putstr_fd || argv != putendl_fd || argv != putnbr_fd)
	{
	FILE * test = fopen("test.txt", "r+");
	if (!test)
		return (printf("Error\n"));

	FILE * stan = fopen("test2.txt", "r+");
		if (!stan)
		return (printf("Error\n"));
	
	fprintf(test, "%s", comp);
	fprintf(stan, "%i", standard);
	
	fclose(test);
	fclose(stan);
	}
	return (0);
}