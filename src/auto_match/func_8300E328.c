typedef unsigned int uint;
typedef struct { int a; int b; } Elem;
typedef struct { Elem *begin; Elem *end; uint cap; } Pool;
extern unsigned char fn_8300E258(Pool *p, int n);

Elem *fn_8300E328(Pool *p)
{
  uint n;
  Elem *e;

  n = p->end - p->begin;
  if ((n < p->cap || fn_8300E258(p, 1) != 0) && n < p->cap) {
    if (p->end != 0) {
      p->end->b = 0;
    }
    e = p->end;
    p->end = e + 1;
    return e;
  }
  return 0;
}
