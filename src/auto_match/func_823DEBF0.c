typedef struct D_823DEBF0 { char pad[0xc]; int f0c; char pad2[0x80]; int f90; } D_823DEBF0;
typedef struct Q_823DEBF0 { char pad[0xd4]; struct Z_823DEBF0 *fd4; } Q_823DEBF0;
typedef struct Z_823DEBF0 { char pad[0xc]; struct Y_823DEBF0 *f0c; } Z_823DEBF0;
typedef struct Y_823DEBF0 { char pad[0x58]; int f58; } Y_823DEBF0;
typedef struct In_823DEBF0 {
  char pad[0x430]; int f430;
  char pad2[0x7c]; Q_823DEBF0 **f4b0; void *f4b4; void *f4b8; D_823DEBF0 *f4bc;
} In_823DEBF0;
typedef struct Obj_823DEBF0 { int p0, p4; In_823DEBF0 *in; int fc; } Obj_823DEBF0;
extern void fn_8229F5A8(void *);
extern void fn_8229F9F8(void *);
extern void fn_8229FAB8(void *, int, int);
extern void fn_823CC298(void *, int);

void fn_823DEBF0(Obj_823DEBF0 *o)
{
  In_823DEBF0 *in = o->in;
  Y_823DEBF0 *y;
  int a, b;
  o->fc = 0;
  if (in->f430 != 0) {
    fn_823CC298(in->f4b8, 8);
    in->f430 = 0;
  }
  fn_8229F5A8((*in->f4b0)->fd4->f0c);
  y = (*in->f4b0)->fd4->f0c;
  b = in->f4bc->f90;
  a = in->f4bc->f0c;
  if (y->f58 == 0) {
    fn_8229F9F8(y);
  } else {
    fn_8229FAB8(y, a, b);
  }
}
