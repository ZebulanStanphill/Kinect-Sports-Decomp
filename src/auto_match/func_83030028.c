typedef struct Obj Obj;
typedef struct ObjVtbl {
  void *fn0;
  void *fn4;
  void (*fn8)(Obj *);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

extern void *fn_82FA5060(int, int);
extern Obj *fn_8302EF18(void *, int);
extern int fn_8302FFB0(Obj *);
extern int lbl_831BC768;

Obj *fn_83030028(int a)
{
  void *mem;
  Obj *p;

  mem = fn_82FA5060(lbl_831BC768, 0x124);
  if (mem != 0) {
    p = fn_8302EF18(mem, a);
  } else {
    p = 0;
  }
  if (p != 0 && fn_8302FFB0(p) != 1) {
    p->vtbl->fn8(p);
    p = 0;
  }
  return p;
}
