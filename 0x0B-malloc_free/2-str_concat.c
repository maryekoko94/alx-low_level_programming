#include <stdlib.h>
/**
 * str_concat - Write a function that concatenates two strings
 * @str1: first string
 * @str2: second string
 * Return: pointer to a buffer containing str1 & str2
 */
char *str_concat(char *str1, char *str2)
{
	char *p;
	int str1count, str2count;
	int sizeBuffer;
	int i;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	for (str1count = 0; str1[str1count]; str1count++)
		;
	for (str2count = 0; str2[str2count]; str2count++)
		;
	sizeBuffer = str1count + str2count + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer; i++)
		i < str1count ? p[i] = str1[i] : (p[i] = str2[i - str1count]);
	return (p);
}
