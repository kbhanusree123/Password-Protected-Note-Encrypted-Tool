#include<stdio.h>
#include<string.h>
#include"type.h"
void encrypt_file(File *f);
int main(int argc,char* argv[])
{
	File f;
	if(argc!=4){
	printf("enterde number is invalid");
	return 0;
	}
	strcpy(f.input,argv[2]);
	strcpy(f.output,argv[3]);
	if(strcmp(argv[1],"-e")==0)
	{
		char user[40];
		printf("enter the password:");
		scanf("%s",f.pass);
		printf("confrom password:");
		scanf("%s",user);
		printf("%s %s",f.pass,user);
		if(strcmp(user,f.pass)==0)
		{
			f.mode=0;
		}	
		else{
			printf("the passwoed are not matched");
			return 1;
		}
	}
	else if(strcmp(argv[1],"-d")==0)
	{
		printf("enter the passwored:");
		scanf("%s",f.pass);
		f.mode=1;
	}
	else{
		printf("the passwared are not matched");
		return 1;
	}
	f.statu.passwored=1;
	f.statu.opration=1;
	f.statu.file_open=1;
	f.head=NULL;
	encrypt_file(&f);
	printf("program is succes");
	return 0;
}

