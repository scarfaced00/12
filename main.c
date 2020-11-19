#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void main(void)
{
	FILE *fp=NULL;
	
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("파일을 못열음\n");
		return;
	}
	
	fputc('a',fp);
	fclose(fp);
}*/
int main(int argc, char *argv[]) {
	int i;
	FILE *fp=NULL;
	char word[100];
	fp=fopen("sample.txt","w");
	for(i=0;i<3;i++)
	{
		printf("input a word:");
		scanf("%s",word);
		fprintf(fp,"%s\n",word);
	}
	fclose(fp);
	return 0;
}
