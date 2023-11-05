#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    src_len;
    
    src_len = ft_strlen(src);

    if (src_len + 1 < dstsize)
        ft_memcpy(dst, src, src_len + 1);

    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = 0;
    }
    return (src_len);
}

#include <stdio.h>
#include <string.h>
int main(){
	char dst[20];
	const char *src = "Hola buenas";
	size_t dstsize = 4;
	size_t mi_resultado;
	mi_resultado = ft_strlcpy(dst, src, dstsize);
	printf("Mi resultado: %ld", mi_resultado);
	return (0);
}

