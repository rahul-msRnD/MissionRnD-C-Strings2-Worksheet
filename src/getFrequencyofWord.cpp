/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include <string.h>

int count_word_in_str_way_1(char *str, char *word){
	int l1 = strlen(str), l2 = strlen(word), i, j, k, n = 0;

	for (i = 0; i <= l2 - l1; i++)
	{
		int flag;
		for (j = i; j < i+l1; j++)
		{
			flag = 1;
			k = j - i;
			if (str[j] != word[k]){
				flag = 0;
				break;
			}

		}
		if (flag == 1)
			n++;
	}
	return n;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

