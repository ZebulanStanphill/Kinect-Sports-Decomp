typedef struct Vt_82EE2B30 { int pad[2]; void (*rel)(void *); } Vt_82EE2B30;
typedef struct Obj_82EE2B30 { Vt_82EE2B30 *vt; char pad[0x4c - 4]; char f4c[0x18]; int f64; } Obj_82EE2B30;
extern unsigned fn_82E50BE8(int, int, int, int, int);
extern Obj_82EE2B30 *fn_82EE2AD0();
extern int fn_82F34930(void *, unsigned, unsigned);
int fn_82EE2B30(int x, unsigned a, unsigned b, Obj_82EE2B30 **out)
{
  Obj_82EE2B30 *o = 0;
  int hr;
  unsigned mem;
  if (a == 0 || b == 0 || out == 0) {
    hr = (int)0x80070057;
  } else {
    mem = fn_82E50BE8(0x68, 0, 0, 0, 0);
    if (mem != 0) o = fn_82EE2AD0();
    else o = 0;
    if (o == 0) {
      hr = (int)0x8007000e;
    } else {
      o->f64 = x;
      hr = fn_82F34930(o->f4c, a, b);
      if (hr >= 0) {
        *out = o;
        return hr;
      }
    }
  }
  if (o != 0) ((void (*)(void *))o->vt->rel)(o);
  return hr;
}
