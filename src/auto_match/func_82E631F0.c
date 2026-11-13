extern void fn_82E4FE40(void *p);
extern void fn_82E50EA0(void *p);
extern void fn_82E51F48(void *p);
extern unsigned int lbl_82154EF0;


void fn_82E631F0(unsigned int *param_1)

{
  *param_1 = &lbl_82154EF0;
  fn_82E51F48(param_1);
  if (param_1[0x10] != 0) {
    fn_82E4FE40((void *)param_1[0x10]);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  fn_82E50EA0(param_1 + 1);
  return;
}

