typedef int (*Fn_826C7CE0)();
typedef struct { Fn_826C7CE0 *vt; } Sub_826C7CE0;
typedef struct { char pad[0x10]; int f10; int pad2; char f18; } Cur_826C7CE0;
typedef struct {
  Fn_826C7CE0 *vt;
  char pad[0x9c - 4];
  Sub_826C7CE0 *f9c;
  char pad2[0x1ac - 0xa0];
  Cur_826C7CE0 *f1ac;
} Obj_826C7CE0;
extern Obj_826C7CE0 *fn_826C59F8(void);

void fn_826C7CE0(void)
{
  Obj_826C7CE0 *o;
  Cur_826C7CE0 *c;
  int limit;
  int cur;

  o = fn_826C59F8();
  if (o != 0) {
    c = o->f1ac;
    if (c == 0 || c->f18 != 0) {
      limit = o->f9c->vt[0x28 / 4](o->f9c);
    } else {
      limit = c->f10;
    }
    cur = o->vt[0x118 / 4](o);
    if (cur < limit) {
      o->vt[0x120 / 4](o, cur + 1);
    }
    o->vt[0x124 / 4](o, 1);
  }
}
