#include <stdlib.h>
#include <time.h>
/** 
 * main: asssign a random number to the variable n each time it is executed 
 *if the number is greater than 0: it's positive, If  the number is 0: it's zero
 *if the number is less than 0: is negative, followed by a new line
 *Return: 0
*/

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
					{
						printf("%d is positive\n";
					}
				
					else if (n == 0)
						printf("$d is zero\n";
					}
					
					else (n < 0)
						printf("$d is negative\n";
					}

				return (0);
				
			}	








	



		

					
				/* your code goes there */
					return (0);
}
