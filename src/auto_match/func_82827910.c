typedef struct {unsigned int value;unsigned char kind;} Key;extern int fn_828278C0(void *,Key *);extern void fn_82822510(void *,int (*)(void *,Key *),Key *,void **);
void fn_82827910(char *object,unsigned int value,unsigned char kind,void **output) {Key key;key.value=value;key.kind=kind;fn_82822510(object+0x2fc,fn_828278C0,&key,output);}
