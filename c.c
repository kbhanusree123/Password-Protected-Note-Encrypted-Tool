#include<stdio.h>
int main()
{
	FILE *fptr1;
	FILE *fptr=fopen("input.txt","r");
	if(fptr==NULL)
	{
		printf("file is not open\n");
	}
fseek(fptr,0,SEEK_END);
int size=ftell(fptr);
rewind(fptr);
fptr1=fopen("output.txt","w");
char a[size];
while(fgets(a,size,fptr))
{
	fputs(a,fptr1);
}
fclose(fptr);
fclose(fptr1);
return 0;
}
