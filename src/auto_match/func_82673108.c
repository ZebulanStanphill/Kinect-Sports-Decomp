extern void fn_82672C20(void *,void *,void *,unsigned int);
int fn_82673108(char *object) {int result;void *owner=*(void **)(object+4);if(*(int *)((char *)owner+0xf0)){void *name=object+0x14;if(*(unsigned int *)(object+0x28)>=16)name=*(void **)name;fn_82672C20(owner,name,*(void **)(object+0x30),*(unsigned int *)(object+0x34));result=0;}else result=1;return result;}
