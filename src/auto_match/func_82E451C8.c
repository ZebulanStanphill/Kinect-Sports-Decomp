extern int fn_82E439A0();
extern int fn_82E50C30();
extern int fn_82E59E00();
extern int fn_82E5AEC8();
extern int fn_82E7B5F8();
extern unsigned int lbl_821530D8;
extern unsigned int lbl_82153100;
extern unsigned int lbl_82153104;
extern unsigned int lbl_82153114;
extern unsigned int lbl_82153124;


unsigned int * fn_82E451C8(unsigned int *param_1,int *param_2)

{
  int iVar1;
  
  fn_82E7B5F8(param_1 + 4);
  *param_1 = &lbl_82153124;
  param_1[1] = &lbl_82153114;
  param_1[2] = &lbl_821530D8;
  param_1[3] = &lbl_82153104;
  param_1[4] = &lbl_82153100;
  param_1[0xe] = 0;
  fn_82E50C30(param_1 + 0xf);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  fn_82E5AEC8(param_1 + 0x21);
  *(unsigned __int64 *)(param_1 + 0x3c) = 0;
  *(unsigned __int64 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  iVar1 = fn_82E59E00(param_1 + 6);
  *param_2 = iVar1;
  if (iVar1 >= 0) {
    iVar1 = (*(int (**)())(*(int *)param_1[6] + 0xc))(param_1[6]);
    *param_2 = iVar1;
    if (iVar1 >= 0) {
      iVar1 = fn_82E439A0(param_1);
      *param_2 = iVar1;
    }
  }
  return param_1;
}

