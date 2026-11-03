struct A_82CFF638;
typedef struct VA_82CFF638 { void *f0; unsigned (*f4)(struct A_82CFF638 *); void *f8, *fc; unsigned (*f10)(void *, struct A_82CFF638 *); } VA_82CFF638;
typedef struct A_82CFF638 { VA_82CFF638 *vt; } A_82CFF638;
typedef struct B_82CFF638 { VA_82CFF638 *vt; } B_82CFF638;
typedef struct Obj_82CFF638 { char pad[0xc]; B_82CFF638 *b; } Obj_82CFF638;

unsigned fn_82CFF638(Obj_82CFF638 *o, A_82CFF638 *a)
{
  unsigned r;
  if (a != 0) {
    r = a->vt->f4(a);
    if (r != 0) return r;
    if (o->b != 0) {
      r = o->b->vt->f10(o->b, a);
      if (r != 0) return r;
    }
  }
  return 0;
}
