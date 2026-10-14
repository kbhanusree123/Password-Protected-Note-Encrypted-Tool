#include<stdio.h>
#include<string.h>
#include"type.h"
void encrypt_file(File *f )
{
FILE *in,*out;
char ch;
in=fopen(f->input,"r");
if(in==NULL)
{
	printf("cannot open %s ",f->input);
}
out=fopen(f->output,"w");
if(out==NULL)
{
	printf("cannot open %s",f->output);
	return;
}
int sum=0;
if(f->mode==encrypt)
{
	for(int i=0;f->pass[i]!='\0';i++)
		sum=sum+f->pass[i];
		fprintf(out,"%d\n",sum);
while(fscanf(in,"%c",&ch)!=EOF)
{
	if(ch!='\n'){
		ch=ch^f->pass[0];
	}
	fprintf(out,"%c",ch);
}
}
int sum1=0;
if(f->mode==decrypt)
{
	fscanf(in,"%d",&sum);
	for(int i=0;f->pass[i]!='\0';i++)
		sum1=sum1+f->pass[i];
if(sum==sum1)
{
	while(fscanf(in,"%c",&ch)!=EOF)
	{
		if(ch!='\n'){
			ch=ch^f->pass[0];
		}
          	fprintf(out,"%c",ch);
	}
}
else{
	printf("word password\n decryption failed\n");
}}
fclose(in);
fclose(out);
}
