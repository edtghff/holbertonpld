#include <stdio.h>
#include "main.h"

int main()
{
	char sentence[] = "Holberton School is the best";
	int wordCount = countWords(sentence);
	printf("The number of words is %d\n", wordCount);

	return 0;
}
