extern void fn_82522838(void);
extern int fn_82522D98(int p);
extern void XMemSet(int err, int b, int p);
extern unsigned int lbl_832767CC;

int fn_82522DF8(int param_1)
{
  int r;

  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  r = fn_82522D98(param_1);
  if (r != 0) {
    XMemSet(r, 0, param_1);
  }
  return r;
}
