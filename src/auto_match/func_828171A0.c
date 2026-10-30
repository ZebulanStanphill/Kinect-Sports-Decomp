extern unsigned char fn_8281FDF0(void *,const char *);
int fn_828171A0(char *object,const char *name) {unsigned char index=fn_8281FDF0(object,name);if(index)return *(int *)(*(char **)(object+0x30)+index*0x21-0x18);return 0;}
