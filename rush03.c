/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:33:15 by jrios-ve          #+#    #+#             */
/*   Updated: 2023/07/09 13:16:35 by jrios-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar();

void rushx_position(int position)
{
    int rush0 = 0;
    ft_putchar(rush0,position);
    
}

void print_f_e(int aux_vert_y, int y, int aux_hori_x, int x)
{
    if(aux_vert_y == 1 )
    {
        while(aux_hori_x <= x)
        {
        if(aux_hori_x > 1 && aux_hori_x < x )
        {
            //write(1, "B", 1);
            rushx_position(1); //center position line one
        }
        if(aux_hori_x == 1)
        {
            //write(1, "A", 1);
            rushx_position(0); //first position first line
        }
        if(aux_hori_x > 1 && aux_hori_x == x)
        {
            //write(1, "C", 1);
            rushx_position(2); //last position first line
        }
        aux_hori_x ++;
        }
        write(1, "\n", 1);
    }
    
    if (aux_vert_y == y)
    {
        while(aux_hori_x <= x)
        {
        if(aux_hori_x > 1 && aux_hori_x < x )
        {
            //write(1, "B", 1);
            rushx_position(7); //center position last line 
        }
        if(aux_hori_x == 1)
        {
            //write(1, "A", 1);
            rushx_position(6); //first position last line
        }
        if(aux_hori_x > 1 && aux_hori_x == x)
        {
            //write(1, "C", 1);
            rushx_position(8); //last position last line
        }
        aux_hori_x ++;
        }
        write(1, "\n", 1);
    }
    
}
void print_in(int aux_vert_y, int y, int aux_hori_x, int x)
{
    if(aux_vert_y > 1 && aux_vert_y < y)
    {
        while(aux_hori_x <= x)
        {
            if(aux_hori_x ==1 || aux_hori_x == x)
            {
                //write(1, "B", 1);
                rushx_position(3); //first and last position line two and next lines
            }
            else
            
            
            {
                //write(1, " ", 1);
                rushx_position(4); //center position line two and next lines
            }
        aux_hori_x ++;
        }
        write(1, "\n", 1);
    }
}
void rush(int x, int y)
{
    int aux_hori_x = 1;
    int aux_vert_y = 1;
    while(aux_vert_y <= y)
    {
        print_f_e(aux_vert_y, y, aux_hori_x, x);
        print_in(aux_vert_y, y, aux_hori_x, x);
        aux_hori_x = 1;
        aux_vert_y ++;
    }}
