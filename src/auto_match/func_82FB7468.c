typedef struct VT_82FB7468 { int f0; int (*f4)(void *, void *, int); } VT_82FB7468;
typedef struct { VT_82FB7468 *vt; int a4; int pad[2]; int a10; } Sub_82FB7468;
typedef struct { int pad[0x10]; int x40; } Item_82FB7468;
typedef struct {
  char pad0[0xc]; unsigned ac;
  char pad10[0x30]; VT_82FB7468 *vt40; int a44; char pad48[8]; Item_82FB7468 *a50;
} Obj_82FB7468;
extern void fn_82FAD100(void *);
extern int fn_82FABF68(Obj_82FB7468 *, int, int);
extern int fn_82FB8C80(void *);
extern Item_82FB7468 *fn_82FB72B0(Obj_82FB7468 *);
extern int fn_82FAD5B0(void *);

int fn_82FB7468(Obj_82FB7468 *o, int a, int b, Item_82FB7468 **out)
{
  int r;
  void *s = &o->vt40;
  fn_82FAD100(s);
  r = fn_82FABF68(o, a, b);
  if (r == 1) {
    r = fn_82FB8C80((char *)o + 0x5c);
    if (r == 1) {
      Item_82FB7468 *it = fn_82FB72B0(o);
      int tmp;
      *out = it;
      if (it == 0 || it->x40 == 0) {
        r = 2;
      } else {
        tmp = o->a44;
        o->a50 = it;
        o->vt40->f4(s, &tmp, 0);
        if (o->ac == 0) r = fn_82FAD5B0(s);
      }
    }
  }
  return r;
}
