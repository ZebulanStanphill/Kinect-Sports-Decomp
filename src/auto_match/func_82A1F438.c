extern int XexGetModuleSection(void *,const char *,void **,unsigned int *);extern void fn_82A31F28(int);
unsigned char fn_82A1F438(void *image,const char *name,void **address,unsigned int *size) {int status=XexGetModuleSection(image,name,address,size);if(status<0){fn_82A31F28(status);return 0;}return 1;}
