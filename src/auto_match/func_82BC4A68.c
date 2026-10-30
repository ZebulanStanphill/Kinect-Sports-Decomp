extern void *fn_82B7BD28(void *,int);
extern void *fn_82BC3DC8(void *,int,void *,void *,void *);
void *fn_82BC4A68(int a,char *b,void *c,void *d) { void *v=*(void **)(b+0x5ac); void **p=fn_82B7BD28(v,0x3c4); *p=v; if(p+1) return fn_82BC3DC8(p+1,a,b,c,d); return 0; }
