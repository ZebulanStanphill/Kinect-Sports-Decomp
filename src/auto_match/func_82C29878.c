typedef struct O {
  char pad0[0x10];
  void *f10;
  char pad14[0x30 - 0x14];
  int f30;
} O;
extern int fn_82C10B28();
extern int fn_82C290D8();
extern int fn_82C294A8();

void fn_82C29878(int param_1)
{
  O *o;

  o = *(O **)(param_1 + 0x2c);
  fn_82C290D8();
  fn_82C294A8(param_1);
  if (o->f10 != 0) {
    fn_82C10B28(o->f30, 0x1e, &o->f10);
  }
  if (o != 0) {
    fn_82C10B28(o->f30, 0x1e, &o);
  }
}
