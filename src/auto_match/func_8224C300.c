typedef int (*F)(void *); typedef int (*G)(void *);
unsigned char fn_8224C300(void *p) { char *q=(char*)((F *)(*(void **)p))[1](p); void *sub=q+0x9c; return ((G *)(*(void **)sub))[15](sub); }
