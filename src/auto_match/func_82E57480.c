extern int fn_82E50C30();
extern int fn_82E572E8();
extern int fn_82E5AEC8();
extern unsigned int lbl_8215494C;


unsigned int * fn_82E57480(unsigned int *param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  *param_1 = &lbl_8215494C;
  fn_82E50C30(param_1 + 2);
  fn_82E5AEC8(param_1 + 0x11);
  if ((*param_3 >= 0) && ((param_2 & 0xffffffff) != 0)) {
    iVar1 = fn_82E572E8(param_1,param_2);
    *param_3 = iVar1;
  }
  return param_1;
}

