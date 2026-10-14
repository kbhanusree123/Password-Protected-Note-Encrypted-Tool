#ifndef TYPE_H
#define TYPE_H
typedef enum{
	encrypt,
	decrypt
}Mode;
typedef struct{
	unsigned int passwored:1;
	unsigned int opration:1;
	unsigned int file_open:1;
}status;
typedef struct file{
	char pass[40];
	char input[50];
	char output[60];
	Mode mode;
	status statu;
	struct file *head;
}File;
#endif
