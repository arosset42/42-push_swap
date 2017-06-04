#ifndef PS_MLX_H
# define PS_MLX_H

# include "libft.h"
# include "keys.h"
# include <mlx.h>
# include <stdlib.h>

# define W_WIDTH	2000
# define W_HEIGHT	200

# define STACK_W	(W_WIDTH)
# define STACK_H	(W_HEIGHT / 2)

typedef struct	s_img
{
	void		*id;
	int			width;
	int			height;
	char		*addr;
	int			bpp;
	int			lsize;
	int			endian;
}				t_img;

typedef struct	s_pt
{
	int			x;
	int			y;
}				t_pt;

struct s_ps;

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	t_img		*img;
	t_keys		*keys;
	int			*palette;
}				t_env;

void			mlx_redraw(struct s_ps *ps, char *op);

/*
**		env.c
*/
t_env			*mlx_env_instance(t_env *env);
void			free_env(t_env *e);
t_env			*init_env(void);

void			clear_image(t_img *img);
t_img			*create_new_image(t_env *e, int width, int height);

void			my_pixel_put_to_image(t_img *img, int x, int y, int color);
void			my_pixel_put_to_image_osx(t_img *img, int x, int y, int color);

void			draw_line(int color, t_pt *pt1, t_pt *pt2, t_img *img);

#endif
