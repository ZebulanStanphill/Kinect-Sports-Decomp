typedef struct Vt_82EE8EE0 { int pad; void (*addref)(void *); } Vt_82EE8EE0;
typedef struct Obj_82EE8EE0 { Vt_82EE8EE0 *vt; } Obj_82EE8EE0;
extern void *fn_82E50BE8(int, int, int, int, int);
extern Obj_82EE8EE0 *fn_82EE8BB8(void *mem);
extern void fn_82EE8630(Obj_82EE8EE0 *o);
extern void fn_82E4FE40(void *p);
extern int fn_82EE8D20(Obj_82EE8EE0 *o, int b, int a);

int fn_82EE8EE0(int a, int b, Obj_82EE8EE0 **out)
{
  void *mem;
  Obj_82EE8EE0 *o;
  int hr;
  mem = fn_82E50BE8(0xb8, 0, 0, 0, 0);
  if (mem == 0) {
    hr = (int)0x8007000e;
  } else {
    o = fn_82EE8BB8(mem);
    hr = fn_82EE8D20(o, b, a);
    if (hr >= 0) {
      *out = o;
      o->vt->addref(o);
    } else if (o != 0) {
      fn_82EE8630(o);
      fn_82E4FE40(o);
    }
  }
  return hr;
}
