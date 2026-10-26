typedef struct A A;
struct A { char *(*alloc)(void *, int, int); };
typedef struct { int x; A *a; } P;

void fn_829B6DA0(P *p)
{
  char *r = p->a->alloc(p, 0, 0x118);
  *(int *)(r + 0x114) = 0;
}
