#include <unistd.h>
#include <main.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * on error, -1 is returned and error is set appropriately.
 */

int main(void){

	char ch[] = "_putchar";
		int i = 0;
		char c;

		while (i <= 8){
			c = ch[i];
			_putchar(c);
			i++;
		
		
		
		
		}
		_putchar('\n');
		return(0)

}

int _putchar(char c)
{
	return (write(1, &c 1));


}
