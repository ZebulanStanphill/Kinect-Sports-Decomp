typedef unsigned int uint;
typedef struct { int d[5]; } Elem;
typedef struct { Elem *begin; Elem *end; uint cap; } Vec;
extern unsigned char fn_8302EA88(Vec *, int);
extern void fn_83032BB0(Elem *);

Elem *fn_8302EB70(Vec *v)
{
  uint n;
  Elem *p;

  n = v->end - v->begin;
  if ((n < v->cap || fn_8302EA88(v, 2)) && n < v->cap) {
    if (v->end != 0) {
      fn_83032BB0(v->end);
    }
    p = v->end;
    v->end = p + 1;
    return p;
  }
  return 0;
}
