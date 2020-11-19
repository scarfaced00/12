#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = NULL;
	char name[20];
	char word[20];
	char line[100];
	printf("original file name :");
	scanf("%s", name);
	printf("word to find :");
	scanf("%s", word);
	fp = fopen(name, "r");
	printf("find a word %s\n",word);
	while (fgets(line, sizeof(line), fp) != NULL)
	{
		if (strncmp(line, word, strlen(word)) == 0)
			{
			printf("Search done!");
			break;
		}
		else
			printf("Search failed!");
	}
	return 0;
}
