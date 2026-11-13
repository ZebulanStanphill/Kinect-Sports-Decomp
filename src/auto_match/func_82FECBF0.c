extern int fn_82FA5190();
extern int fn_8301D0D8();
extern int fn_83021E70();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;


typedef struct { void *vt; int pad[2]; int sub; } Sub;

void fn_82FECBF0(int param_1)
{
  Sub *s;
  fn_8301D0D8(param_1 + 8);
  s = (Sub *)(param_1 + 0x1a0);
  fn_83021E70(&s->sub);
  s->vt = &lbl_8217D040;
  fn_82FA5190(lbl_831BC770,param_1);
}
