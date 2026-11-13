extern int fn_8305B1D0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8217E630;
extern unsigned int lbl_8217E650;


unsigned int * fn_8305B5E0(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  param_1[2] = 0;
  param_1[1] = 0xac44;
  *param_1 = &lbl_8217E630;
  param_1[3] = 0;
  param_1[4] = 0;
  fn_8305B1D0(param_1 + 5);
  fn_8305B1D0(param_1 + 10);
  fn_8305B1D0(param_1 + 0xf);
  *param_1 = &lbl_8217E650;
  uVar1 = lbl_82005710;
  param_1[0x1c] = 0;
  uVar2 = lbl_82015618;
  *(unsigned __int64 *)(param_1 + 0x14) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x16) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x18) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x1a) = uVar2;
  return param_1;
}

