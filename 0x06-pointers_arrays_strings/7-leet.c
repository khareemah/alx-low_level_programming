#include "main.h"
/**
* leet - encodes character
* @s: string parameter
* Return: String
*/

char *leet(char *s)
{
	int i;
	int j;
	char lc[] = "aeotl";
	char up[] = "AEOTL";
	char n[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	for (j = 0; j < 5; j++)
{
	if (s[i] == lc[j] || s[i] == up[j])
{
	s[i] = n[j];
	break;
}
}
	return (s);
}

