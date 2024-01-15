#include <stdlib.h>
#include "main.h"
/**
 * str_concat - links two strings
 * @s1:first string
 * @s2:secong string
 * Return: null or pointer
 *
 */
char *str_concat(char *s1, char *s2)
{
char *con;
int a, b, c, d;
a = 0;
b = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[a] != '\0')
{
a++;
}
while (s2[b] != '\0')
{
b++;
}

con = malloc(a + b *sizeof(char) + 1);
if (con == NULL)
{
return (NULL);
}
for (c = 0; c < a; c++)
{
con[c] = s1[c];
}
for (d = 0; d < b; d++)
{
con[a + d] = s2[d];
}
con[a + d + 1] = '\0';
return (con);
free(con);
}










































