extern void *fn_8265C9E0(unsigned int);
extern void *fn_824FB500(void *, void *, void *);
int fn_824FB450(char *p, char *q) { void *mem=fn_8265C9E0(0xa4); void *v=mem ? fn_824FB500(mem,q+0xa4,q+0x124) : 0; *(void **)(p+0x70)=v; return 1; }
