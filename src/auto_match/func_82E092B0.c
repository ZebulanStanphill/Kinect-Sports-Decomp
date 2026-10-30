typedef struct Entry { int pad; void (*f)(void *,int); } Entry;
extern Entry *fn_82D00450(void *,void *,int);
Entry *fn_82E092B0(char *p,void *x,void *key) { Entry *e=fn_82D00450(p+8,key,0); if(e) { if(e->f) e->f(x,1); return e; } return 0; }
