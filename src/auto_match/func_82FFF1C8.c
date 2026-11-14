extern int fn_82FA5190();
extern unsigned int lbl_831BC768;
typedef struct N { struct N *next; int a,b,c; unsigned d; unsigned e, f; } N;
typedef struct T { int heap; N *b[0xc1]; int cnt; } T;
void fn_82FFF1C8(T *p) { int i; N **s = p->b; for (i = 0xc1; i != 0; i--, s++) { N *n = *s; while (n != 0) { N *next = n->next; if (n->d != 0) { n->e = n->d; fn_82FA5190(lbl_831BC768, n->d); n->d = 0; n->e = 0; n->f = 0; } fn_82FA5190(p->heap, n); n = next; } *s = 0; } p->cnt = 0; }
