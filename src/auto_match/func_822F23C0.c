typedef struct { int a; void *p; } Str;
extern void fn_822315A0(void *p);
extern Str *fn_82365BD8(Str *dst, Str *src);
extern char lbl_821ADF3C[];
extern char lbl_821AE5A8[];

typedef struct {
  void *vtbl;
  int m04;
  int m08;
  int m0c;
  int m10;
  int m14;
  Str s;
  int m20;
  int m24;
} Obj;

Obj *fn_822F23C0(Obj *param_1, int param_2, int param_3, int param_4,
                 int param_5, int param_6, Str *param_7, int param_8)
{
  Str *t;
  Str tmp;
  int *m24;

  t = fn_82365BD8(&tmp, param_7);
  param_1->vtbl = lbl_821ADF3C;
  param_1->m04 = param_3;
  param_1->m08 = param_2;
  param_1->m0c = param_4;
  param_1->m10 = param_5;
  param_1->m14 = param_6;
  fn_82365BD8(&param_1->s, t);
  param_1->m20 = param_8;
  if (t->p != 0) {
    fn_822315A0(t->p);
  }
  param_1->vtbl = lbl_821AE5A8;
  m24 = &param_1->m24;
  *m24 = 0;
  if (param_7->p != 0) {
    fn_822315A0(param_7->p);
  }
  return param_1;
}
