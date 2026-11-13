typedef struct Obj_8295D9B8 Obj_8295D9B8;
typedef struct { void *pad[0x134 / 4]; int (*f134)(Obj_8295D9B8 *); } Vt_8295D9B8;
struct Obj_8295D9B8 { Vt_8295D9B8 *vt; };
extern int fn_8295D0A8(Obj_8295D9B8 *, int);
extern int fn_829548C8(Obj_8295D9B8 *);
int fn_8295D9B8(Obj_8295D9B8 *o)
{
  int hr = fn_8295D0A8(o, 0x27);
  if (hr >= 0) {
    hr = o->vt->f134(o);
    if (hr >= 0) {
      hr = fn_829548C8(o);
      if (hr >= 0) return 0;
    }
  }
  return hr;
}
