typedef struct A A;
typedef struct AVt { void *f0, *f4, *f8, *fc; void (*f10)(A *a); } AVt;
struct A { AVt *vt; };
typedef struct B B;
typedef struct BVt { void *f0; void (*f4)(B *b, int n); } BVt;
struct B { BVt *vt; };
typedef struct S { int x0; A *a; int x8; B *b; } S;

void fn_82A5C130(S *s)
{
    s->a->vt->f10(s->a);
    s->b->vt->f4(s->b, 1);
}
