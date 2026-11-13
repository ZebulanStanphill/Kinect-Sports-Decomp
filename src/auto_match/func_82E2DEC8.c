extern void fn_82E4FE40(void *p);
extern void fn_82E50EA0(void *p);
extern void fn_82E51F48(void *p);
extern unsigned int lbl_8214C750;


void fn_82E2DEC8(unsigned int *param_1)

{
  *param_1 = &lbl_8214C750;
  fn_82E51F48(param_1);
  if (param_1[0x10] != 0) {
    fn_82E4FE40((void *)param_1[0x10]);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  fn_82E50EA0(param_1 + 1);
  return;
}

