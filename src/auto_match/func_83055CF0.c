extern void *fn_82A1E6A0(int,int,int,int);
extern void fn_82A1E7D8(void *);
void fn_83055CF0(char *p) { void *q = *(void **)(p+4); if (q) fn_82A1E7D8(q); else *(void **)(p+4) = fn_82A1E6A0(0,1,0,0); p[8] = 1; }
