typedef struct A A; typedef struct B B; typedef struct AV { void *a; B *(*f)(A *); } AV; struct A { AV *v; }; typedef struct BV { void *pad[16]; void (*f)(B *, unsigned __int64 *); } BV; struct B { BV *v; };
unsigned __int64 fn_8224C348(A *a) { unsigned __int64 x; B *b=(B *)((char *)a->v->f(a)+0x48); b->v->f(b,&x); return x; }
