extern void fn_82E47028(void *);
extern void fn_82E4FE40(void *);
extern char lbl_821538C0[];
void fn_82E471A0(void **param_1)
{
  *param_1 = lbl_821538C0;
  fn_82E47028(param_1);
  if (param_1[8] != 0) {
    fn_82E4FE40(param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
}
