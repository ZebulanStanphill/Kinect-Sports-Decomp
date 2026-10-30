struct Obj_82E43358;
typedef struct VT_82E43358 { void *pad[2]; void (*f8)(struct Obj_82E43358 *); } VT_82E43358;
typedef struct Obj_82E43358 { VT_82E43358 *vt; } Obj_82E43358;
extern int fn_82E43158(Obj_82E43358 **p);

int fn_82E43358(Obj_82E43358 **p)
{
  int hr;

  if (p == 0) {
    return 0x80070057;
  }
  hr = fn_82E43158(p);
  if (hr < 0 && *p != 0) {
    (*p)->vt->f8(*p);
    *p = 0;
  }
  return hr;
}
