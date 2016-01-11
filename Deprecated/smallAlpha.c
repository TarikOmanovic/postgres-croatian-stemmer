#include <stdio.h>
#include <string.h>

struct Node {
	char c;
	struct Node *ptr;
	struct Node *end;
};

void recursiveTrie(char *input, int inputPosition, char *suffix, struct Node *init, struct Node *endPtr)
{
	while ( init < endPtr)
	{
		if((*init).c == input[inputPosition])
		{
			
			*suffix = (*init).c;
			*(suffix+1) = '\0';
			if ( (*init).ptr && (*init).end )
				recursiveTrie(input, inputPosition-1, suffix+1, (*init).ptr, (*init).end);
			break;
		}
		init++;
	}
}

void initTrie(char *word, struct Node *trie)
{
	int contains = 0;
	int i = 0;
	int len = strlen(word);
	for (i = 0; i<len; i++)
	{
		

int main(){

	struct Node trie[30] = NULL;

	int i = 0;
	char input[5];

	input[0] = 't';
	input[1] = 'g';
	input[2] = 'e';
	input[3] = 'o';
	input[4] = 'a';
	char bestSuffix[15];

	struct Node array[5];
	struct Node *init = array;
	struct Node array2[3];
	struct Node array3[1];

	struct Node *endPtr = array + sizeof(array)/sizeof(array[0]);
	array[0].c = 'a';
	array[0].ptr = array2;
	array[0].end = array2+3;
	array[1].c = 'e';
	array[1].ptr = 0;
	array[1].end = 0;
	array[2].c = 'i';
	array[3].c = 'o';
	array[4].c = 'u';

	array2[0].c = 'e';
	array2[1].c = 'i';
	array2[2].c = 'o';
	array2[2].ptr = array3;
	array2[2].end = array3+1;

	array3[0].c = 'e';
	
	recursiveTrie(input, 4, bestSuffix, init, endPtr);
	printf("%s", bestSuffix);
}
