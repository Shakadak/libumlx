PIX	:=	put_pixel_to_image.c \
		apply_image.c \
		clear_image.c \
		draw_basic_line.c \
		draw_line.c \
		draw_rectangle.c

OBJ := $(OBJ) $(PIX:.c=.o)

$(DIROBJ)/%.o: $(DIRPIX)/%.c $(INC)
	$(COMPIL)
