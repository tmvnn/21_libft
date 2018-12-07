/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:14:06 by lbellona          #+#    #+#             */
/*   Updated: 2018/12/07 23:18:16 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>
#include "libft.h"

void stra(unsigned int i, char *str)
{
	//str[i] = (char)i;
	i++;
	*str = 'B';
}

char strb(char str)
{
	printf("%c", str);
	return ((char)str);
}

int		main(int argc, char **argv)
{
	//char s1[] = "override this !";
	//unsigned char d1[] = "ooooooo";
	//char s1[15] = "asdfg";
	//unsigned char d2[] = "ooooooo";

	char **s;
	s = ft_strsplit("FaFaFaaaFaaaFFaaaFa",'F');
	printf("%s\n", (s[0] == 0 ? "Da" : "Net"));
	argc++;
	argv++;
	while (*s)
	{
		//ft_putchar(*(*argv)++);
		//ft_putchar(*(*argv++)++);
		ft_putendl(*s);
		s++;
	}

	//ft_putchar(**argv++);
	//ft_putchar(**argv++);
	//ft_putstr(*argv);
	//ft_putchar(**argv++);
	/*
	char *t;
	//printf("%s\n", t=ft_strtrim("   \n \tb s \tf"));
	const char *s = "\t \n a \t\t asd\t   \tn";
	printf("%s\n", t=ft_strtrim(s));
	printf("len_rez = %lu\n", ft_strlen(t));
	printf("%s\n", (t[0] == 0 ? "Da" : "Net"));
	printf("%p\n", t);
	printf("%p\n", s);
	*/
	//                         0123 4 5678
	//printf("%d\n", ft_strnequ("abc", "abd", 2));

	//char *s;
	//s = ft_strsub("asdfghjkl", 3, 3);
	//printf("%s", s);

	//ft_striteri(s1, stra);
	//printf("\n%lu", ft_strlen(s1));

	//printf("%d\n", ft_strncmp("q", "a", 0));
	//printf("%d",    strncmp("q", "a", 0));

	//printf("ft = [%s]\n",  ft_memchr(s2 + 9, 'c', 2));
	//printf("or = [%s]\n",     memchr(s1 + 9, 'c', 2));
	//printf("or = [%s]\n",    memccpy(NULL, NULL, 103, 8));

	//char	*s1 = "\xff\xaa\xde\x12MACOSX";
	//char	*s2 = "\xff\xaa\xde\x12MACOSX";

	//printf("ft = [%d]\n",    ft_memcmp(s1, s2, -3));
	//printf("ft = [%s]\n",       ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
	//printf("or = [%s]\n",       strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));

	//printf("ft = [%d]  ", ft_atoi(" 922337203685477"));
	//printf("or = [%d]\n",    atoi(" 922337203685477"));

	//char *t;
	//t = ft_strnew(42949672960);//(18446744073709551614);
	//t += 1844674;
	//t += 9200000000000000009;
	//printf("%d\n", t);

	//printf("%s\n", s1);
	//printf("%s\n", s2);
	return (0);
}
