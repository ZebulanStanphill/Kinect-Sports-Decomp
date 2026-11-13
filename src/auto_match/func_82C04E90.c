extern int fn_8265C990();
extern int fn_82C06390();
extern unsigned int lbl_820EC8D8;


void fn_82C04E90(int *param_1)

{
  *param_1 = &lbl_820EC8D8;
  if (param_1[0xe] != 0) {
    fn_8265C990(param_1[0xb],0x208c800d);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  fn_82C06390(param_1);
  return;
}

