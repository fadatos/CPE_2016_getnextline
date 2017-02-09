/*
** main.c for  in /home/fadatos/B1_Modules/B1_Get_next_line/CPE_2016_getnextline
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Mon Jan 16 00:40:32 2017 albouy titouan
** Last update Sat Feb  4 19:25:25 2017 albouy titouan
*/

#include "get_next_line.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *s)
{
  write(1, s, my_strlen(s));
}

int		main(int ac, char **av)
{
  char		*s;
  int		fd;

  fd = open(av[1], O_RDONLY);
  /* fd = 2; */
  while (s = get_next_line(fd, 0))
    {
      my_putstr(s);
      my_putchar('\n');
      free(s);
    }
  return (0);
}
