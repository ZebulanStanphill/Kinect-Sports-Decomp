extern int fn_82A6D090(void *, int, unsigned int *);
int fn_82A6D330(char *object) { unsigned int value; int status=fn_82A6D090(object+0xe0,1,&value); if(status>=0) *(unsigned short *)(object+0x10)=value; return status; }
