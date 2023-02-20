#include <stdio.h>
#include <stdlib.h>

/**
 * To evaluate face values released under
 * abuja public license
 */

int main()
{
	char card_name[3];
	puts("Enter the card name: ");
	scanf("%2s", card_name);
	int val = 0;
	if (card_name[0] == 'k')
	{
		val = 10;
	}else if (card_name[0] == 'q') {
		val = 10;
	} else if (card_name[0] == 'j') {
		val = 10;
	} else if (card_name[0] == 'a') {
		val = 11;
	} else { val = atoi(card_name);
	
	}

	/* check if value is 3 to 6 */
	if ((val > 2) && (val < 7))
		puts ('Deals up');

	/* otherwise check if the card was 10, j, k, */
	else if (val == 10)
		puts('Deals has gone down');
		
	/* printf("The card value is: %i\n", val); */
	return 0;
}	
