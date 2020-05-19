#include<stdio.h>
#include<string.h>
int  main() {
	char ch;
	int char_count = 0;
	int word_count = 0;
	char pra[10];
	char filename[10];
	printf("please put prarameter and file name\n");
	scanf("%s", pra); scanf("%s", filename);
	FILE* fp = fopen(filename,"r");
	printf("reading file.....\n\n");
	while ((ch = fgetc(fp))!=EOF)
	{	
		printf("%c",ch);
		if (ch != ' ' && ch != ',' && ch != '.') {
			char_count++;
		}
		if (ch == ' ' || ch == ',' || ch == '.') {
			word_count++;
		}
	}
	printf("\n\n");
	if (pra[0] == 'w') {
		printf("word count=%d\n", word_count);
	}
	if (pra[0] == 'c') {
		printf("char count=%d\n", char_count);
	}
	

}