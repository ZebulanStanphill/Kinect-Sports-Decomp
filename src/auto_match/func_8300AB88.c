extern void *fn_82FA5060();
extern struct Obj *fn_8300AA60();
extern int fn_8300AB00(obj);
extern int lbl_831BC768;

typedef struct Obj {
  void (**vtbl)(struct Obj *);
} Obj;

extern Obj *lbl_832645A8;
extern Obj *lbl_832645B0;

Obj *fn_8300AB88(int param_1)
{
  void *mem;
  Obj *obj;

  mem = fn_82FA5060(lbl_831BC768, 0xa4);
  if (mem == 0) return 0;
  obj = fn_8300AA60(mem, param_1);
  if ((unsigned)obj <= 0) return obj;
  if (fn_8300AB00(obj) != 1) {
      obj->vtbl[2](obj);
      return 0;
  }
  if (lbl_832645A8 != 0) return obj;
  lbl_832645A8 = obj;
  lbl_832645B0 = obj;
  return obj;
}
