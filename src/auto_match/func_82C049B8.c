typedef struct Obj_82C049B8 Obj_82C049B8;
typedef struct { void *pad[0x30 / 4]; int (*f30)(Obj_82C049B8 *); } Vt_82C049B8;
struct Obj_82C049B8 { Vt_82C049B8 *vt; char pad[0x34]; int f38; int f3c; };
int fn_82C049B8(Obj_82C049B8 *o, int a, int b)
{
  int hr = o->vt->f30(o);
  if (hr >= 0) {
    o->f38 = a;
    o->f3c = b;
    return hr;
  }
  o->vt->f30(o);
  return hr;
}
