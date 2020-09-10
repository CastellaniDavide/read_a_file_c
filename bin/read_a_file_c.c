/**
 * @file read_a_file_c.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief Read a file and write the content in the terminal
 *
 * @ingroup read_a_file_c
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *mdPtr;
	char *line = (char *)malloc(sizeof(char) * 1000);
	size_t len = 0;
	size_t read;

	if ((mdPtr = fopen("./../docs/README.md", "r")) == NULL)
	{
		puts("Error reading the file");
	}
	else
	{
		while ((read = getline(&line, &len, mdPtr)) != -1)
		{
			printf("%s\n", line);
		}
	}

	fclose(mdPtr);

	return 0;
}