extern int *fn_82279C58(void *, int);
extern int fn_822315A0();
extern int fn_8266F740();

typedef struct Vt_82280B40 { void (*f0)(void *, int); } Vt_82280B40;
typedef struct Obj_82280B40 { Vt_82280B40 *vt; } Obj_82280B40;

void fn_82280B40(int *param_1)
{
  unsigned char ok;
  int *piVar2;
  Obj_82280B40 *o;
  struct { int a; unsigned int cnt1; int b; unsigned int cnt2; } t;

  piVar2 = fn_82279C58(&t.a, *param_1);
  ok = *piVar2 != 0;
  if (t.cnt1 != 0) {
    fn_822315A0(t.cnt1);
  }
  if (ok) {
    piVar2 = fn_82279C58(&t.b, *param_1);
    fn_8266F740(*piVar2);
    if (t.cnt2 != 0) {
      fn_822315A0(t.cnt2);
    }
  }
  o = (Obj_82280B40 *)*param_1;
  if (o != 0) {
    o->vt->f0(o, 1);
  }
  *param_1 = 0;
  param_1[1] = 0;
}
