/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	char c;
	int count = 0, index, i = 0, set = 0, prevI, prevC;
	while (1)
	{
		if (str[i] == '\0' || str[i] != ' ')
			break;
		i++;
	}
	//i--;
	if (str[i] == '\0')
	{
		char *res = (char*)malloc(sizeof(char));
		res[0] = '\0';
		return res;
	}
	index = i;
	while ((c = str[i++]) != '\0')
	{
		if (c == ' ' && count>0)
		{
			prevC = count;
			count = 0;
			index = i;
			set = 1;
		}
		else if (c != ' ')
		{
			count++;
			if (str[i - 2] == ' ')
				prevI = i - 1;
		}
	}
	if (count == 0 && set == 1)
		count = prevC;
	char *res = (char*)malloc((count + 1)*sizeof(char));
	if (count == 0)
	{
		if (set == 0)
			res = '\0';
		//index = prevI;
	}
	else
	{
		if (str[i - 2] == ' ')
			index = prevI;
		i = 0;
		while ((c = str[index++]) && count--)
			res[i++] = c;
		res[i] = '\0';
	}
	return res;
}