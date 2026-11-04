extern void *fn_82E50BE8(int, int, int, int, int); extern void *fn_82E64598(void *);
typedef struct Vt_82E64618 { void *f0, *f1; int (*f8)(void *); void *fc, *f10, *f14, *f18, *f1c; int (*f20)(void *, const unsigned short *); } Vt_82E64618;
typedef struct Obj_82E64618 { Vt_82E64618 *vt; } Obj_82E64618;
int fn_82E64618(Obj_82E64618 **out) {
  void *mem; Obj_82E64618 *o; int hr;
  *out = 0;
  mem = fn_82E50BE8(0xbc, 0, 0, 0, 0);
  if (mem != 0) o = (Obj_82E64618 *)fn_82E64598(mem); else o = 0;
  if (o == 0) {
    hr = 0x8007000E;
  } else {
    hr = o->vt->f20(o, L"en-us");
    if (hr >= 0) { *out = o; o = 0; }
    if (o != 0) ((int (*)(void *))o->vt->f8)(o);
  }
  return hr;
}
