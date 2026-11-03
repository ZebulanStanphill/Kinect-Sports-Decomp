extern void fn_82E4FE40(void *);
extern void fn_82E583E0(void *);
extern void fn_82F3E1E0(void *);
extern int lbl_82154DB8;
extern int lbl_8215FDD0;

void fn_82E5CE68(unsigned *param_1)
{
  *param_1 = (unsigned)&lbl_82154DB8;
  param_1[1] = (unsigned)&lbl_8215FDD0;
  if (param_1[0x1e] != 0) {
    fn_82E4FE40((void *)param_1[0x1e]);
  }
  param_1[0x1e] = 0;
  if (param_1[0x20] != 0) {
    fn_82E4FE40((void *)param_1[0x20]);
  }
  param_1[0x20] = 0;
  fn_82F3E1E0(param_1 + 1);
  fn_82E583E0(param_1);
}
