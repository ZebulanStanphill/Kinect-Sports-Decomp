extern int fn_82E5AEC8();
extern int fn_82F40C90();
extern unsigned int lbl_82160240;
extern unsigned int lbl_82160294;
extern unsigned int lbl_821602C0;


unsigned int * fn_82EEDC68(unsigned int *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &lbl_821602C0;
    fn_82F40C90(param_1 + 0x1f);
  }
  *param_1 = &lbl_82160294;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[1] + 4) + 4) = &lbl_82160240;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x78;
  fn_82E5AEC8(param_1 + 2);
  param_1[0x1d] = 0;
  return param_1;
}

