extern void *fn_8267BED0(void *, int, int *);
extern void *fn_8269D7D8(void *, void *, void *, int *);
void *fn_82759050(void *a, void *b, int *c) { int type = 0x142; int value; void *p = fn_8267BED0(b,0x6c,&type); if (p) { value = *c; return fn_8269D7D8(p,a,b,&value); } return 0; }
