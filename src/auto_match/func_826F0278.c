extern char lbl_8200DA48[];

typedef struct W_826F0278 { struct { void *f0, *f4, *f8; int (*fc)(struct W_826F0278 *); } *vt; } W_826F0278;
typedef struct { char pad[0x14]; int m14; } P_826F0278;
typedef struct { int m0; int m4; unsigned m8; } Src_826F0278;
typedef struct {
  void *vt;
  int m4;
  unsigned char m8;
  int mc, m10, m14, m18, m1c, m20;
} Obj_826F0278;

Obj_826F0278 *fn_826F0278(Obj_826F0278 *param_1, P_826F0278 *param_2, Src_826F0278 *param_3)
{
  unsigned v;
  int *t;
  int w;

  param_1->m4 = (int)param_2;
  param_1->m8 = 0;
  param_1->vt = lbl_8200DA48;
  param_1->mc = param_3->m0;
  param_1->m10 = param_3->m4;
  v = param_3->m8;
  t = &param_1->m14;
  param_1->m18 = 0;
  *t = v;
  param_1->m1c = 0;
  param_1->m20 = 0;
  v = param_3->m8;
  param_1->m18 = v;
  if (v == 0) {
    w = ((P_826F0278 *)param_1->m4)->m14;
    if (w != 0) {
      param_1->m18 = ((W_826F0278 *)w)->vt->fc((W_826F0278 *)w);
    }
  }
  return param_1;
}
