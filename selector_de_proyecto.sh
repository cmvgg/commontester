#!/bin/bash

directorio_archivos="./"

chmod +x archivo_in.sh
function selector {
echo "proyecto número: 
	  1. Libft
	  2. Printf
	  3. GNL
	  4. So long
	  5. Fdf
	  7. Pipex
	  8. Minitalk
	  9. Minishell
	  10. Philosophers
	  11. Cpp 00
	  12. Cpp 01
	  13. Cpp 02
	  14. Cpp 03
	  15. Cpp 04
	  16. Cpp 05
	  17. Cpp 06
	  18. Cpp 07
	  19. Cpp 08
	  20. Cpp 09
	  21. Cub3d
	  22. MiniRT
	  23. Inception
	  24. Webserv
	  25. Ft_irc
	  26. Transcendence"

echo "Introduce el numero del proyecto: "
read proyecto
if [[$proyecto = 1]]; then
	chmod +x libft.sh
	./01-libft.sh

if [[$proyecto = 9]]; then
	chmod +x pipex.sh
	./07-pipex.sh
else
	echo "El test no existe"
fi
}
