typedef struct A A;
struct A { char *(*alloc)(void *, int, int); };
typedef struct { int x; A *a; } P;

void fn_829B6D60(P *p)
{
  char *r = p->a->alloc(p, 0, 0x84);
  *(int *)(r + 0x80) = 0;
}
