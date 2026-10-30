struct Obj_82E40F90;
typedef struct VT_82E40F90 { void *pad[2]; void (*f8)(struct Obj_82E40F90 *); } VT_82E40F90;
typedef struct Obj_82E40F90 { VT_82E40F90 *vt; } Obj_82E40F90;
extern int fn_82E40B20(Obj_82E40F90 **p);

int fn_82E40F90(Obj_82E40F90 **p)
{
  int hr;

  if (p == 0) {
    return 0x80070057;
  }
  hr = fn_82E40B20(p);
  if (hr < 0 && *p != 0) {
    (*p)->vt->f8(*p);
    *p = 0;
  }
  return hr;
}
