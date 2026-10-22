typedef struct Obj Obj;
typedef struct ObjVtbl {
  void *fn0;
  void *fn4;
  void (*fn8)(Obj *);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

extern void *fn_82FA5060(int, int);
extern Obj *fn_83032398(void *, int);
extern int fn_8300AB00(Obj *);
extern int lbl_831BC768;

Obj *fn_83032458(int a)
{
  void *mem;
  Obj *p;

  mem = fn_82FA5060(lbl_831BC768, 0xa4);
  if (mem != 0) {
    p = fn_83032398(mem, a);
  } else {
    p = 0;
  }
  if (p != 0 && fn_8300AB00(p) != 1) {
    p->vtbl->fn8(p);
    p = 0;
  }
  return p;
}
