#include <stdio.h>
#include <conio.h>

int main()
{
	char text[] = {
		'I', ' ', 'a', 'm', ' ', 'a', ' ',
		's', 't', 'r', 'i', 'n', 'g', '!', '\0'
	};

	puts(text);

	_getch();
	return(0);
}