extern int fn_82FABDE0();
extern int fn_82FAD0F0();
extern int fn_82FAD4D0();
extern int fn_82FB8418();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216D9C4;
extern unsigned int lbl_8216D9D8;
extern unsigned int lbl_8216D9E0;
extern unsigned int lbl_8216D9F8;


void fn_82FB6E40(unsigned int *param_1)

{
  *param_1 = &lbl_8216D9F8;
  param_1[1] = &lbl_8216D9E0;
  param_1[4] = &lbl_8216D9D8;
  param_1[6] = &lbl_8216CC7C;
  param_1[0x10] = &lbl_8216D9C4;
  fn_82FAD4D0(param_1 + 0x10);
  if ((int *)param_1[0x16] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[0x16] + 8))(param_1[0x16]);
  }
  fn_82FB8418(param_1 + 0x17);
  fn_82FAD0F0(param_1 + 0x10);
  fn_82FABDE0(param_1);
  return;
}

