#include "libft.h"

// this fuction is designed to allocate and return memory.

void	*ft_memalloc(size_t size)
{
	void	*m;		//we first make a void variable of pointer m. 
			       //we then use the allocated memory that will be applied to it for any type of data.

	m = malloc(size);        //we then use malloc to allocate memory to our m variable based on the size.
	if (m == NULL)	        //if the allocation fails we return NULL.
		return (NULL);
	ft_bzero(m, size);      //if not the run the fuction ft_bzero on our allocated 0 of memory m and give size parameter
	return (m);		// we then return void variable
}
