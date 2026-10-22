typedef struct Obj Obj;
typedef struct ObjVtbl {
  void *fn0;
  void *fn4;
  void (*fn8)(Obj *);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

extern void *fn_82FA5060(int, int);
extern Obj *fn_83028948(void *, int);
extern int fn_83028690(Obj *);
extern int lbl_831BC768;

Obj *fn_830288B8(int a)
{
  void *mem;
  Obj *p;

  mem = fn_82FA5060(lbl_831BC768, 0x70);
  if (mem != 0) {
    p = fn_83028948(mem, a);
  } else {
    p = 0;
  }
  if (p != 0 && fn_83028690(p) != 1) {
    p->vtbl->fn8(p);
    p = 0;
  }
  return p;
}
