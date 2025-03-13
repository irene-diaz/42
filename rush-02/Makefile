# Nombre del ejecutable
PROGRAMA = mi_programa

# Compilador
CC = gcc

# Opciones de compilación
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRCS = main.c funciones.c

HEAD		                                                                                                                            = ./includes/

DICT		= ./dicts/

NAME		= rush-02

# Archivos objeto
OBJS = $(SRCS:.c=.o)

# Regla principal: compilar el programa
$(PROGRAMA): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAMA) $(OBJS)

# Regla para compilar cada archivo .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -f $(OBJS) $(PROGRAMA)
fclean:		clean
	rm -f ${NAME}
re:			fclean all
