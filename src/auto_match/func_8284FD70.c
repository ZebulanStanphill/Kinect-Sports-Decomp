extern void fn_8285F138(void *,int);
extern void fn_8285C220(void *,int);
void fn_8284FD70(char *object,int value) {void *child=*(void **)(object+0x90);unsigned int tag;if(!child)return;tag=*(unsigned int *)((char *)child+0x1c);if(tag>=1){if(tag==1)fn_8285F138(child,value);}else fn_8285C220(child,value);}
