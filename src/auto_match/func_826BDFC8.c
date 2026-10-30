extern void *fn_8267B890(void *,unsigned,int);extern void *fn_826C2E00(void *,void *);
void *fn_826BDFC8(void *self,char *parent){void *member=parent+0x78;void *memory=fn_8267B890(*(void **)(*(char **)member+0x288),0x34,0);return memory?fn_826C2E00(memory,member):0;}
