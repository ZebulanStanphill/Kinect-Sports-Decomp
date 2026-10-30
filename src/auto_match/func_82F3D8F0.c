typedef struct VT_82F3D8F0 { char pad[0x2c]; unsigned __int64 (*f2c)(void *); } VT_82F3D8F0;
typedef struct Obj_82F3D8F0 {
  VT_82F3D8F0 *vt; char pad4[8]; unsigned fc; char pad10[0x10]; unsigned __int64 f20; char pad28[0x18];
  unsigned f40; char pad44[4]; unsigned f48; unsigned f4c;
} Obj_82F3D8F0;
extern void fn_82E4FE40(unsigned);
extern unsigned fn_82E50BE8(unsigned, int, int, int, int);
extern void fn_82E57620(void *, void *);
extern void fn_82E576A8(void *, void *);
extern int fn_82E57820(unsigned, void *, unsigned);

int fn_82F3D8F0(Obj_82F3D8F0 *o, unsigned *out)
{
  unsigned size;
  int hr;
  unsigned __int64 v;
  void *p;
  unsigned total, payload;
  if (o->fc == 0)
    return 0xc00d36b6;
  if (out == 0)
    return 0x80070057;
  size = o->f40;
  hr = 0;
  *out = 0;
  if (size < 0x18) {
    *out = 0x18;
    return 0;
  }
  p = (char *)o + 0x28;
  fn_82E57620((char *)o + 0x10, p);
  fn_82E576A8((char *)o + 0x20, p);
  v = o->f20;
  if (v < 0x18) {
    hr = 0x8000ffff;
  } else if (v >= 0xffffffff) {
    hr = 0xc00d3a9a;
  } else {
    total = (unsigned)v;
    payload = total - 0x18;
    o->f48 = payload;
    if (size < payload + 0x18) {
      *out = payload + 0x18;
      return 0;
    }
    if (o->f4c != 0)
      fn_82E4FE40(o->f4c);
    o->f4c = 0;
    if (o->f48 != 0) {
      o->f4c = fn_82E50BE8(o->f48, 0, 0, 0, 0);
      if (o->f4c == 0) {
        hr = 0x8007000e;
      } else {
        hr = fn_82E57820(o->f4c, p, o->f48);
        if (hr == (int)0xc00d36b1)
          return 0;
      }
    }
  }
  *out = size - o->f40;
  if (hr >= 0 && o->vt->f2c(o) != *out)
    return 0xc00d3a9a;
  return 0;
}
