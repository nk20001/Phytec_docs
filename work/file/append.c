#include<stdio.h>
#include<stdlib.h>
int main()
{
	char student[30],ch;
	FILE *fp;
	printf("enter the file name");
	scanf("%[^\n]",student);
	fp=fopen(student,"a");
	if(fp==NULL)
	{
		printf("\n fail to create a file\n");
		exit(1);
	}
	printf("\n File created");
	printf("\n Enter data into file& press end\n");
	while((ch=getchar())!=EOF)
		putc(ch,fp);
	 fclose(fp);
}


