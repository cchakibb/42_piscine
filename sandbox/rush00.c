#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int h;
	int v;

	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((h == 1 && v == 1) || (h == 1 && v == y))
				ft_putchar('A');
			else if ((h == x && v == y) || (h == x && v == 1))
				ft_putchar('C');
			else if ((h > 1 && h < x) && (v == 1 || v == y))
				ft_putchar('B');
			else if ((v > 1 && v < y) && (h == 1 || h == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}

int main(void)
{
	rush(1, 2);
	return 0;
}
