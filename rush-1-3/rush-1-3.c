/*
** EPITECH PROJECT, 2020
** rush-1-3
** File description:
** 
*/

int caractere(int x, int y, int comptx, int compty)
{
    if ((compty == 1 && comptx == 1) || (compty == 1 && comptx == x))
        my_putchar(65);
    else if ((compty == y && comptx == 1) || (compty == y && comptx == x))
        my_putchar(67);
    else if (compty == 1 || comptx == 1 || compty == y || comptx == x)
        my_putchar(66);
    else
        my_putchar(' ');
}


void rush(int x, int y)
{
    for(int compty = 1; compty <= y; compty = compty + 1)
    {
        for(int comptx = 1; comptx <= x; comptx = comptx + 1)
            caractere(x, y, comptx, compty);
        my_putchar('\n');
    }
}
