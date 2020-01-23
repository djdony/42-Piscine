# Commands that should be needed

norminette -R CheckForbiddenSourceHeader file.c

gcc -Wall -Wextra -Werror main.c ft_putchar.c file.c

### Debug with lldb
gcc -c file.c
lldb a.out
b main
run
gui
n
