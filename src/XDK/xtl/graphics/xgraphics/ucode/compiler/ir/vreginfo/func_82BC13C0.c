extern int fn_82BC0928();
extern unsigned int lbl_820E3514;


unsigned int * fn_82BC13C0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  
  fn_82BC0928();
  *param_1 = &lbl_820E3514;
  uVar1 = *(unsigned int *)(param_4 + 0x584);
  param_1[4] = uVar1;
  param_1[0xc] = uVar1;
  *(int *)(param_4 + 0x584) = *(int *)(param_4 + 0x584) + 1;
  return param_1;
}

