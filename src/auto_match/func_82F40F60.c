struct Obj_func_82F40F60;
typedef struct {
  int pad[16];
  int (*f40)(struct Obj_func_82F40F60 *, void *, int);
} VT_func_82F40F60;
typedef struct Obj_func_82F40F60 {
  VT_func_82F40F60 *vt;
} Obj_func_82F40F60;

int fn_82F40F60(Obj_func_82F40F60 *o, void *a, unsigned short flag)
{
  int ok = 0;
  int r;
  if (flag != 0) {
    r = o->vt->f40(o, a, 0x2000);
    if (r < 0)
      return r;
    if (r == 1)
      ok = 1;
  }
  r = 1;
  if (flag == 0 || ok)
    r = o->vt->f40(o, a, 0x39);
  return r;
}
