typedef struct Obj Obj;
typedef int (*fn_t)();
struct Obj {
  fn_t *vt;
};
extern Obj *fn_826C59F8(void);

void fn_826C5AF8(void)
{
  Obj *o;
  int n;

  o = fn_826C59F8();
  if (o != 0) {
    n = o->vt[0x118 / 4](o);
    if (n > 0) {
      o->vt[0x120 / 4](o, n - 1);
    }
    o->vt[0x124 / 4](o, 1);
  }
}
