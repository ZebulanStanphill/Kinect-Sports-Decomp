extern int fn_82FABD78();
extern int fn_8300C9E8();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216D7FC;
extern unsigned int lbl_8216D804;
extern unsigned int lbl_8216D80C;
extern unsigned int lbl_8216D824;


unsigned int * fn_82FB4390(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82FABD78(param_1,param_3);
  fn_8300C9E8(param_1 + 0x10);
  param_1[0x11] = param_2;
  *param_1 = &lbl_8216D824;
  param_1[1] = &lbl_8216D80C;
  param_1[0x12] = 0;
  param_1[4] = &lbl_8216D804;
  param_1[6] = &lbl_8216CC7C;
  param_1[0x10] = &lbl_8216D7FC;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x1e) = 0;
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(int (***)())(*(int *)param_1[0x11] + 4))();
  }
  return param_1;
}

