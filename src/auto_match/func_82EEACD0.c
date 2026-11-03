typedef struct Vt_82EEACD0 { int pad; void (*addref)(void *); } Vt_82EEACD0;
typedef struct Obj_82EEACD0 { Vt_82EEACD0 *vt; } Obj_82EEACD0;
extern Obj_82EEACD0 *fn_82E50BE8(int, int, int, int, int);
extern void fn_82EE8BB8(void *);
extern void fn_82EE8C68(void *);
extern int fn_82EEAC40(void *, int, int);
extern int lbl_82160048;
int fn_82EEACD0(int a, int b, Obj_82EEACD0 **out)
{
  Obj_82EEACD0 *o;
  int hr;
  o = fn_82E50BE8(0xb8, 0, 0, 0, 0);
  if (o == 0) {
    hr = (int)0x8007000e;
  } else {
    fn_82EE8BB8(o);
    o->vt = (Vt_82EEACD0 *)&lbl_82160048;
    hr = fn_82EEAC40(o, b, a);
    if (hr >= 0) {
      *out = o;
      o->vt->addref(o);
    } else {
      fn_82EE8C68(o);
    }
  }
  return hr;
}
