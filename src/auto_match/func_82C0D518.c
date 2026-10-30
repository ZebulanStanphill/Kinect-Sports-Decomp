typedef struct V_82C0D518 { struct { char pad[0x4c]; void (*f4c)(struct V_82C0D518 *); char pad2[8]; void (*f58)(struct V_82C0D518 *); } *vt; } V_82C0D518;
typedef struct O_82C0D518 { char pad[0x2c]; V_82C0D518 *f2c; char pad2[0xc0]; int ff0; char pad3[0x1c]; int f110; } O_82C0D518;
extern int fn_82A1E2C0(int);

void fn_82C0D518(O_82C0D518 *p, int param_2, unsigned param_3)
{
  if (param_3 != 0) {
    p->f2c->vt->f4c(p->f2c);
  }
  p->f2c->vt->f58(p->f2c);
  if (p->ff0 != 0) {
    fn_82A1E2C0(p->f110);
    p->ff0 = 0;
  }
}
