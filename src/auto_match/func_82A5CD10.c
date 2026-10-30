typedef void (*F)(void *); extern int fn_82A5C0E0(void *, int, int,int);
int fn_82A5CD10(char *p,int unused,int a,int b) { void *q=*(void **)(p+12); int r; ((F *)(*(void **)q))[2](q); r=fn_82A5C0E0(p+4,0,a,b); q=*(void **)(p+12); ((F *)(*(void **)q))[5](q); return r; }
