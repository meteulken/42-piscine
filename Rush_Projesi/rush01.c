#include <unistd.h>
void ft_putchar(char c);

void linewrite(int x, char char1, char char2,char char3)
{
    ft_putchar(char1);
    while (x - 2 > 0)
    {
        ft_putchar(char2);
        x--;
    }
    if (x > 1)
        ft_putchar(char3);
}

void    rush(int x, int y)
{
    if (x > 0 && y > 0)
    {
        linewrite(x, '/', '*', '\\');
        while ( y - 2 > 0)
        {
            ft_putchar('\n');
            linewrite(x, '*', ' ', '*');
            y--;
        }
        if ( y > 1)
        {
            ft_putchar('\n');
            linewrite(x, '\\', '*', '\');
        }
    }
}
                      
void rush (int x, int y);
                      
int main(void)
{
      rush (5, 5);
      return(0);
}
