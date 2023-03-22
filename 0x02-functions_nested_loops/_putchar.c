#include <unistd.h>
#include "My_Functions.h"


int _putchar(char c)
{
	return (write(1, &c, 1));
}
