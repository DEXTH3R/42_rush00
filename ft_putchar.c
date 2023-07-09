/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:31:35 by jrios-ve          #+#    #+#             */
/*   Updated: 2023/07/09 00:33:03 by jrios-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void rush00(char *charac,int position)
{
    char characters00[]= "o-o| |o-o";
    
    char character = characters00[position];
    *charac = character;
}

void rush01(char *charac,int position)
{
    char characters01[10] = "/*\\* *\\*/";
    
    char character = characters01[position];
    *charac = character;
}

void rush02(char *charac,int position)
{
    char characters02[]= "ABAB BCBC";
    char character = characters02[position];
    
    *charac = character;
}

void rush03(char *charac,int position)
{
    char characters03[] = "ABCB BABC";
    char character = characters03[position];
    
    *charac = character;
}

void rush04(char *charac,int position)
{
    char characters04[] = "ABCB BCBA";
    char character = characters04[position];
    
    *charac = character;
}


void ft_putchar(int rushx, int position)
{
    char charac;
    
    if(rushx == 0)
    {
        rush00(&charac, position);
        write(1, &charac, 1);
    }
    
    else if(rushx == 1)
    {
        rush01(&charac, position);
        write(1, &charac, 1);
    }

    else if(rushx == 2)
    {
        rush02(&charac, position);
        write(1, &charac, 1);
    }
    
    else if(rushx == 3)
    {
        rush03(&charac, position);
        write(1, &charac, 1);
    }
    
    else if(rushx == 4)
    {
        rush04(&charac, position);
        write(1, &charac, 1);
    }
}
