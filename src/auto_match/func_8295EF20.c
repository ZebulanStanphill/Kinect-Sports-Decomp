typedef struct Obj_8295EF20 Obj_8295EF20;
struct Obj_8295EF20 { long (**vt)(Obj_8295EF20 *); };
extern long fn_8295D0A8(Obj_8295EF20 *o, int id);
extern long fn_829548C8(Obj_8295EF20 *o);

long fn_8295EF20(Obj_8295EF20 *o)
{
  long hr;

  hr = fn_8295D0A8(o, 0x2b);
  if (hr >= 0) {
    hr = o->vt[0x134 / 4](o);
    if (hr >= 0) {
      hr = fn_829548C8(o);
      if (hr >= 0) {
        return 0;
      }
    }
  }
  return hr;
}
