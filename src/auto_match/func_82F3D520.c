extern int fn_82F38638();
extern int fn_82F3D0E0();
extern int fn_82F3E1E0();
extern unsigned int lbl_82162D9C;
extern unsigned int lbl_82162DB0;


void fn_82F3D520(unsigned int *param_1)

{
  *param_1 = &lbl_82162DB0;
  param_1[1] = &lbl_82162D9C;
  fn_82F3E1E0(param_1 + 1);
  param_1[0x15] = 0;
  fn_82F38638(param_1 + 0x16);
  fn_82F3D0E0(param_1);
  return;
}

