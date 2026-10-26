extern void fn_8267C4C8(void *);
extern void fn_82695DA0(void *, void *);
typedef struct { char pad[0x10]; int *p; } Obj;

Obj *fn_826F6D78(Obj *a, Obj *b)
{
  fn_82695DA0(a, b); if (b->p != 0) fn_8267C4C8(b->p); a->p = b->p; return a;
}
