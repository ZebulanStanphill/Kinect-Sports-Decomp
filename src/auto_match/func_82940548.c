typedef struct O O; typedef struct V { void *pad[28]; unsigned (*f)(O *, void *); } V; struct O { V *v; };
extern int fn_82953CA8(O *, void *, void *, void *, unsigned *);
int fn_82940548(O *p, char *q, void *a, void *b, unsigned *out) { int hr = fn_82953CA8(p,q,a,b,out); if (hr >= 0) { if (p->v->f(p, *(void **)(q+0x6c)) == 0x11) *out = 1; hr=0; } return hr; }
