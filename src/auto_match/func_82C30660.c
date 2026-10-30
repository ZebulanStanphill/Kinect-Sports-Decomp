extern int fn_82C30370(void *,int,unsigned int *);
int fn_82C30660(char *object) {unsigned int value;int status=fn_82C30370(object+0xe0,1,&value);if(status>=0) *(unsigned short *)(object+0x10)=value;return status;}
