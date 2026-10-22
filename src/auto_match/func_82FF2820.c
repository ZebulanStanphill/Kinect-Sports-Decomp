typedef struct Obj Obj;
typedef struct ObjVtbl {
  void (*fn0)(Obj *, int);
  void *fn4;
  void (*fn8)(Obj *, int);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

extern void fn_82FA5190(int, Obj *);
extern void fn_82FECE48(Obj *);
extern int lbl_831BC768;

int fn_82FF2820(Obj *p)
{
  int v;

  if (p == 0) {
    return 0x1f;
  }
  fn_82FECE48(p);
  p->vtbl->fn8(p, 0);
  v = lbl_831BC768;
  p->vtbl->fn0(p, 0);
  fn_82FA5190(v, p);
  return 1;
}
