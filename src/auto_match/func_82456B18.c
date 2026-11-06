extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);

typedef struct { unsigned char b[0x18]; } Elem_82456B18;
typedef struct {
  Elem_82456B18 *begin;
  Elem_82456B18 *end;
  int cap;
} Vec_82456B18;
typedef struct {
  unsigned char pad0[8];
  unsigned char sub[0x18];
  Vec_82456B18 v2;
  int pad2c;
  Vec_82456B18 v1;
} Obj_82456B18;

void fn_82456B18(Obj_82456B18 *o)
{
  Elem_82456B18 *p;
  Elem_82456B18 *b;
  Elem_82456B18 *e;
  Vec_82456B18 *v;
  v = &o->v1;
  p = v->begin;
  if (p != 0) {
    e = v->end;
    for (; p != e; p++) {
      fn_82359C18(p);
    }
    fn_8265CA20(v->begin);
  }
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
  v = &o->v2;
  b = v->begin;
  if (b != 0) {
    e = v->end;
    p = b;
    if (b != e) {
      do {
        fn_82359C18(p);
        p++;
      } while (p != e);
    }
    fn_8265CA20(v->begin);
  }
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
  fn_82359C18(o->sub);
}
