extern int fn_825ACF50();
extern int fn_8288CCB8();
extern int *fn_8288DFB8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern unsigned int fn_828B55F8();

typedef struct { int a, b; } Obj8;

void fn_828910B8(int param_1, int param_2)
{
  int r;
  unsigned int idx;
  int out1;
  int out2;
  Obj8 t1;
  Obj8 t2;
  Obj8 t3;

  param_2 = param_2 + 0x14;
  r = param_1 + 0x24;
  fn_828B5580(&t1, param_2);
  fn_8288CCB8(&idx, r, &t1);
  fn_828B55B0(&t1);
  fn_825ACF50(&out1, r, idx);
  fn_828B5580(&t2, param_2);
  idx = fn_828B55F8(&t2);
  if (idx != 0x8000) {
    r = *fn_8288DFB8(&out1, param_1 + 0x34, &idx) + 0x10;
  }
  fn_828B55B0(&t2);
  fn_828B5580(&t3, param_2);
  fn_8288CCB8(&idx, r, &t3);
  fn_828B55B0(&t3);
  fn_825ACF50(&out2, r, idx);
}
