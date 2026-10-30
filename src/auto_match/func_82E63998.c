struct O_82E63998; typedef struct O_82E63998 { struct Vt_82E63998 *vt; } O_82E63998;
struct Vt_82E63998 { void *s[2]; void (*f8)(O_82E63998 *); };
extern void *fn_82E50BE8(int, int, int, int, int);
extern O_82E63998 *fn_82E63940(void *);
extern int fn_82E630D0(O_82E63998 *, int, int);
int fn_82E63998(int param_1, int param_2, O_82E63998 **param_3)
{
  void *m;
  O_82E63998 *o;
  int hr;
  if (param_3 == 0) {
    hr = 0x80070057;
  } else {
    m = fn_82E50BE8(100, 0, 0, 0, 0);
    o = m ? fn_82E63940(m) : 0;
    if (o == 0) {
      hr = 0x8007000e;
    } else {
      hr = fn_82E630D0(o, param_1, param_2);
      if (hr >= 0) { *param_3 = o; o = 0; }
      if (o != 0) o->vt->f8(o);
    }
  }
  return hr;
}
