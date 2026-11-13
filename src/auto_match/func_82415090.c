extern unsigned char fn_82414F58(void *);
typedef struct Wa { unsigned v; unsigned pad; struct Wa2 { unsigned v; unsigned pad; unsigned *p; } *p; } Wa;
typedef struct Wb { unsigned v; unsigned pad; unsigned *p; } Wb;
typedef struct { int pad; Wa *a; Wb *b; } T;
unsigned fn_82415090(T *s)
{
  unsigned char bVar2;
  bVar2 = s->a != 0 && s->b != 0 && s->b->v + s->a->v == 10;
  if (bVar2) {
    if (fn_82414F58(s) != 0) return *s->b->p + 10;
  }
  bVar2 = s->a != 0 && s->a->v == 10;
  if (bVar2) {
    if (fn_82414F58(s) != 0) {
      return *s->a->p->p + s->a->p->v + 10;
    }
  }
  if (fn_82414F58(s) != 0) return s->b->v + s->a->v;
  return 0;
}
