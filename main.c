/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:22:40 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/01 18:04:21 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>




int main(void)
{
	
	printf("%c eh alfa? %d\n", '+', ft_isalpha('+'));
	printf("%c eh alfa? %d\n", ' ', ft_isalpha(' '));
	printf("%c eh alfa? %d\n", 'r', ft_isalpha('r'));
	printf("%c eh alfa? %d\n", 'S', ft_isalpha('S'));
	printf("%c eh alfa? %d\n", '6', ft_isalpha('6'));





	printf("\n === ft_strlen === \n");
	char simone[] = "MANDRAGORA alvonte";
	printf("%zu\n", ft_strlen(simone));





	printf("%c eh digito? %d\n", '8', ft_isdigit('8'));
	printf("%c eh digito? %d\n", '.', ft_isdigit('.'));
	printf("%c eh digito? %d\n", '5', ft_isdigit('5'));




	printf("%c eh alfa ou digito? %d\n", 'S', ft_isalnum('S'));
	printf("%c eh alfa ou digito? %d\n", '3', ft_isalnum('3'));
	printf("%c eh alfa ou digito? %d\n", '.', ft_isalnum('.'));
	printf("%c eh alfa ou digito? %d\n", ' ', ft_isalnum(' '));




	printf("%c eh ascii? %d\n", 'w', ft_isascii('w'));
	printf("%c eh ascii? %d\n", '3', ft_isascii('3'));
	printf("%d eh ascii? %d\n", 128, ft_isascii(128));




	printf("%c eh printavel? %d\n", '^', ft_isprint('^'));
	printf("%c eh printavel? %d\n", ' ', ft_isprint(' '));
	printf("%d eh printavel? %d\n", 128, ft_isprint(128));




	printf("%c minuscula pra maiuscula %c\n", 'n', ft_toupper('n'));



	printf("%c maiuscula pra minuscula %c\n", 'S', ft_tolower('S'));




	char teste[]= "simone";
	char c = 'A';
	printf("original: %s\n", teste);
	printf("%s\n", ft_memset(teste, c, 5));





	char string1[10] = "outono";
	char string2[10] = "outono";
	printf("antes bzero: %s\n", string1);
	bzero(string1 + 1, 5 );
	printf("após bzero: %s\n", string1);
	printf("antes ft_bzero: %s\n", string2);
	ft_bzero(string2 + 1, 5);
	printf("após ft_bzero: %s\n", string2);





	char dst[20] = "roteiro";
	char src1[20] = "123";
	char dst2[20] = "roteiro";
	char src2[20] = "123";

	int n = 3;

	printf("dst antes memcpy: %s\n", dst);
	printf("src antes memcpy: %s\n", src1);
	memcpy(dst, src1, n);
	printf("\n");
	printf("dst depois de memcpy: %s\n", dst);
	printf("\n");
	printf("dst antes ft_memcpy: %s\n", dst2);
	printf("src antes ft_memcpy: %s\n", src2);
	ft_memcpy(dst2, src2, n);
	printf("dst depois ft_memcpy: %s\n", dst2);







	char csrc[100] = "Cadetes da 42";
	ft_memmove(csrc+7, csrc, ft_strlen(csrc)+1);
	printf("String movida é: %s\n", csrc);







	char src[] = "FRIBURGO";
    // The destination string size is 10.
    char dest[10];
    // copying 5 bytes of src into dest.
    ft_strlcpy(dest, src, 4);
    printf("Copied string: %s\n", dest);







	char first[] = "This is ";
    char last[] = "a potentially long string";
    int i;
    int size = 16;
    char buffer[size];

    ft_strlcpy(buffer,first,size);
    i = strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",i);
    if( i > size )
        puts("String truncated");
    else
        puts("String was fully copied");



	printf("-----STRCHR-----\n");


	const char str[] = "meu mundo seu mundo";
	const char ch = 'o';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("|%c| 333333 - |%s|\n", ch, ret);

	printf("------STRRCHR-----\n");

	int len;
	const char sstr[] = "bagaceira de cada dia";
	const char ba = 'e';
	char *r;

	r = ft_strrchr(sstr, ba);
	printf("|%c| 999999 - |%s|\n", ba, r);

	printf("-----STRNCMP----\n");

// 0  strings iguais
// -1 s1 for menor que a s2
// 1  s1 for maior que a str2


	char palavra1[50] = ("c");
	char palavra2[50] = ("b");

	printf("\n\nResultado: %d\n\n", ft_strncmp(palavra1, palavra2, n));

	printf("-----TESTE MEMCHR-----\n");

	char	string_memchr[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	string_ft_memchr_c[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*retorno;
	char	*retorno1;
	char	encontrar = 'M';
	char	encontrar1 = 'M';

	printf("antes de memchr: %s\n", string_memchr);
	retorno = memchr(string_memchr, encontrar, 13);
	printf("depois de memchr: %s\n", retorno);

	printf("antes de ft_memchr: %s\n", string_ft_memchr_c);
	retorno1 = ft_memchr(string_ft_memchr_c, encontrar1, 13);
	printf("depois de ft_memchr: %s\n", retorno1);




	printf("-----TESTE MEMCMP-----\n");

	int z;
	unsigned char A[10] = "LINUX";
	unsigned char B[10] = "linux";
	z = ft_memcmp(A, B, 5);
	if (z == 0)
		printf("A  igual B\n");
	else if (z > 0)
		printf("B menor A\n");
	else
		printf("A menor B\n");


	printf("-----TESTE STRNSTR-----\n");




	char	g_strnstr[100] = "ABCDEFGHIJKLMsimoneNOPQRSTUVWXYZ";
	char	g_ft_strnstr_c[100] = "ABCDEFGHIJKLMsimoneNOPQRSTUVWXYZ";
	printf("Original: %s\n", strnstr(g_strnstr, "simone", 17));
	printf("ft_strnstr: %s\n", ft_strnstr(g_ft_strnstr_c, "simone", 17));


	printf("-----TESTE ATOI-----\n");


char *num = "-123213";
    char *letras = "ABCDEF";
    printf("%d %d",ft_atoi(num),ft_atoi(letras));


	return(0);
}

