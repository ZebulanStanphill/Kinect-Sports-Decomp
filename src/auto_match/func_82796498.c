typedef struct Item_82796498 { char pad[4]; unsigned f4; char pad2[0x14]; unsigned f1c; } Item_82796498;
typedef struct Obj_82796498 { char pad[8]; int f8; Item_82796498 **arr; unsigned count; unsigned f14; unsigned f18; } Obj_82796498;
extern void fn_8267BE38(void *);
extern unsigned char fn_8278FD18(Item_82796498 *);
extern void fn_82790FA0(Item_82796498 *, int, unsigned);
extern void fn_82794B38(void *);
extern void fn_82794B88(Obj_82796498 *);
extern void *fn_82794C10(void);
extern void fn_82796170(void *, void **);

Item_82796498 *fn_82796498(Obj_82796498 *o, unsigned n)
{
  unsigned total = 0;
  Item_82796498 *e;
  unsigned cnt;
  unsigned extra;
  unsigned len;
  void *tmp;
  void *p;
  if (o->count != 0) {
    e = o->arr[o->count - 1];
    cnt = e->f4;
    extra = e->f1c;
    len = cnt;
    if (cnt != 0 && fn_8278FD18(e) != 0) {
      len = cnt - 1;
    }
    total = len + extra;
  }
  fn_82794B88(o);
  tmp = fn_82794C10();
  fn_82796170(&o->arr, &tmp);
  if (tmp != 0) {
    p = tmp;
    fn_82794B38(p);
    fn_8267BE38(p);
  }
  e = o->arr[o->count - 1];
  fn_82790FA0(e, o->f8, n == 0 ? o->f18 : n);
  e->f1c = total;
  return e;
}
