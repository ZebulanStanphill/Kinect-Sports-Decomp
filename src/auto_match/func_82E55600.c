extern int fn_82E50C30();
extern int fn_82EE2D20();
extern unsigned int lbl_8214C320[];
extern unsigned int lbl_821548E0;


unsigned int * fn_82E55600(unsigned int *param_1,int *param_2)

{
  param_1[1] = 0;
  *param_1 = &lbl_821548E0;
  fn_82E50C30(param_1 + 2);
  param_1[0x11] = lbl_8214C320[0];
  param_1[0x12] = lbl_8214C320[1];
  param_1[0x13] = lbl_8214C320[2];
  param_1[0x14] = lbl_8214C320[3];
  fn_82EE2D20(param_1 + 0x15);
  if (*param_2 >= 0) {
    *param_2 = 0;
  }
  return param_1;
}

