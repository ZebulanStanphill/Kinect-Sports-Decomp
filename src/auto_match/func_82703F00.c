extern void fn_826D03A0(void *, unsigned int);
typedef struct Vec { void **p; unsigned int size; } Vec;
void fn_82703F00(char *self, void *p) { unsigned int n=*(unsigned int *)(self+0xa90), i=0; if (n) { Vec *v=(Vec *)(self+0xa8c); do { if (v->p[i] == p) { fn_826D03A0(v,i); return; } ++i; } while (i<n); } }
