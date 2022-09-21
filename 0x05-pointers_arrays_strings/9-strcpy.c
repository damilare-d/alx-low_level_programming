#include "main.h"
#include <string.h>


/**
 *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */



char *_strcpy(char *dest, char *src)

{

	    char *ptrsrc = src;

	        int i = 0;

		    int size = strlen(src);



		        while (i < size)

				    {

					            dest[i] = *ptrsrc++;

						            i++;

							        }



			    return (dest);

}
