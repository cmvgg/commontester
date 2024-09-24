#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void) argc;
	int standard = 0;
	int comp = 0;
	char func = argv[1][0];
	if (strcmp(argv[2], "isalpha"))
		{
			standard = isalpha(func);
			comp = ft_isalpha(func);
		}
	else if (strcmp(argv[2], "isdigit"))
		{
			standard = isdigit(func);
			comp = ft_isdigit(func);
		}
	
	/*else if (argv[2] == "isalnum")
		{
			standard = isalnum (argv[1]);
			comp = ft_isalnum(argv[1]);
		}
	else if (argv[2] == "isascii")
		{
			standard = isascii (argv[1]);
			comp = ft_isascii(argv[1]);
		}
	
	else if (argv[2] == "isprint")
		{
			standard = isprint (argv[1]);
			comp = ft_isprint(argv[1]);
		}
	
	else if (argv[2] == "strlen")
		{
			standard = strlen (argv[1]);
			comp = ft_strlen(argv[1]);
		}

	else if (argv[2] == "memset")
		{
			standard = memset (argv[1]);
			comp = ft_memset(argv[1]);
		}

	else if (argv[2] == "bzero")
		{
			standard = bzero (argv[1]);
			comp = ft_bzero(argv[1]);
		}

	else if (argv[2] == "strchr")
		{
			standard = strchr (argv[1]);
			comp = ft_strchr(argv[1]);
		}

	else if (argv[2] == "strrchr")
		{
			standard = strrchr (argv[1]);
			comp = ft_strrchr(argv[1]);
		}

	else if (argv[2] == "memcpy")
		{
			standard = memcpy (argv[1]);
			comp = ft_memcpy(argv[1]);
		}

	else if (argv[2] == "memmove")
		{
			standard = memmove (argv[1]);
			comp = ft_memmove(argv[1]);
		}

	else if (argv[2] == "memcmp")
		{
			standard = memcmp (argv[1]);
			comp = ft_memcmp(argv[1]);
		}

	else if (argv[2] == "memchr")
		{
			standard = memchr (argv[1]);
			comp = ft_memchr(argv[1]);
		}

	else if (argv[2] == "strlcpy")
		{
			standard = strlcpy (argv[1]);
			comp = ft_strlcpy(argv[1]);
		}

	else if (argv[2] == "strlcat")
		{
			standard = strlcat (argv[1]);
			comp = ft_strlcat(argv[1]);
		}

	else if (argv[2] == "toupper")
		{
			standard = toupper (argv[1]);
			comp = ft_toupper(argv[1]);
		}

	else if (argv[2] == "tolower")
		{
			standard = tolower (argv[1]);
			comp = ft_tolower(argv[1]);
		}

	else if (argv[2] == "strnstr")
		{
			standard = strnstr (argv[1]);
			comp = ft_strnstr(argv[1]);
		}


	else if (argv[2] == "atoi")
		{
			standard = atoi (argv[1]);
			comp = ft_atoi(argv[1]);
		}


	else if (argv[2] == "calloc")
		{
			standard = calloc (argv[1]);
			comp = ft_calloc(argv[1]);
		}

	else if (argv[2] == "strdup")
		{
			standard = strdup (argv[1]);
			comp = ft_strdup(argv[1]);
		}


	else if (argv[2] == "strndup")
		{
			standard = strndup (argv[1]);
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
	*/
	if(argv /*!= putnbr_fd || argv != putstr_fd || argv != putendl_fd || argv != putnbr_fd*/)
	{
	FILE * test = fopen("test.txt", "w");
	if (!test)
		return (printf("Error\n"));

	FILE * stan = fopen("test2.txt", "w");
		if (!stan)
		return (printf("Error\n"));
	
	fprintf(test, "%i", comp);
	fprintf(stan, "%i", standard);
	
	fclose(test);
	fclose(stan);
	}
	return (0);
}