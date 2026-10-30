typedef void (*F)(void *,void *); void fn_8305C458(char *p) { void *q=*(void **)(p+96); if(q) { void *x=*(void **)(p+4); if(x) (*(F *)(*(int *)q+4))(q,x); *(void **)(p+96)=0; } }
