extern void *fn_8267B890(void *,int,int);
extern void *memcpy(void *,const void *,unsigned int);
void fn_826F7B88(char *p, void *src) { void *q=*(void **)(p+0xb04); if(!q) { q=fn_8267B890(*(void **)(p+0x14),44,0); if(q) memcpy(q,src,44); else q=0; *(void **)(p+0xb04)=q; } else memcpy(q,src,44); }
