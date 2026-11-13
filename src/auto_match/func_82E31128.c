extern int fn_82E2F120();
extern int fn_82E2FB40();
extern int fn_82E50C30();
extern int fn_82E59E00();
extern int fn_82E5AEC8();
extern unsigned int lbl_8214C818;
extern unsigned int lbl_8214C830;


unsigned int * fn_82E31128(unsigned int *param_1,int *param_2)

{
  int iVar1;
  
  fn_82E2F120(param_1,0);
  *param_1 = &lbl_8214C830;
  param_1[0x13] = &lbl_8214C818;
  param_1[0x14] = 0;
  fn_82E50C30(param_1 + 0x15);
  param_1[0x24] = 0;
  fn_82E5AEC8(param_1 + 0x25);
  fn_82E5AEC8(param_1 + 0x40);
  fn_82E5AEC8(param_1 + 0x5b);
  param_1[0x76] = 0;
  *(unsigned __int64 *)(param_1 + 0x78) = 0;
  if (*param_2 >= 0) {
    fn_82E2FB40(param_1);
    iVar1 = fn_82E59E00(param_1 + 0x24);
    *param_2 = iVar1;
  }
  return param_1;
}

