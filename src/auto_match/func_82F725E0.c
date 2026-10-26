typedef struct A A;
typedef struct AVt { void *f0; char (*f4)(A *a); } AVt;
struct A { AVt *vt; };
typedef struct B B;
typedef struct BVt { void *f0; void (*f4)(B *b); } BVt;
struct B { BVt *vt; };
typedef struct S { int x0; B *b; A *a; } S;

void fn_82F725E0(S *s)
{
    if (s->a->vt->f4(s->a) == 0) {
        s->b->vt->f4(s->b);
    }
}
