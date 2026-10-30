extern void fn_8267C4F0(void *); extern void fn_82756300(void *, int); extern void fn_8267BE38(void *);
typedef struct { int pad; void **a; unsigned int n; } S;
void fn_82716518(S *p) { unsigned int n=p->n; int i=0; if (n) do { fn_8267C4F0(p->a[i++]); } while (--n); fn_82756300(&p->a,0); fn_8267BE38(p->a); }
